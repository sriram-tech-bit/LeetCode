class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<int>q;
        for(auto k:score){
            q.push(k);
        }
        vector<pair<int,string>>vec;
           q.top();
           
           vec.push_back({q.top(),"Gold Medal"});
           q.pop();
           q.top();
           vec.push_back({q.top(),"Silver Medal"});
           q.pop();
           q.top();
           vec.push_back({q.top(),"Bronze Medal"});
           q.pop();
           int i=4;
      while(q.size()>0){
         q.top();
         vec.push_back({q.top(),to_string(i)});
         i++;
         q.pop();
      }
     
     
      vector<string>res;
        for(int i=0;i<score.size();i++){
            for(auto a:vec){
                if(score[i]==a.first){
                    res.push_back(a.second);
                }
            }
        }
     return res;
     
    }
};