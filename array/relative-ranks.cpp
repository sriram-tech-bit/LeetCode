class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<int>q;
        for(auto k:score){
            q.push(k);
        }
         if(q.size()==1){
            return {"Gold Medal"};
         }
        unordered_map<int,string>hm;
        if(q.size()>=3){
           q.top();
           
           hm.insert({q.top(),"Gold Medal"});
           q.pop();
           q.top();
           hm.insert({q.top(),"Silver Medal"});
           q.pop();
           q.top();
           hm.insert({q.top(),"Bronze Medal"});
           q.pop();

        }else{
            q.top();
           
           hm.insert({q.top(),"Gold Medal"});
           q.pop();
           q.top();
           hm.insert({q.top(),"Silver Medal"});
           q.pop();

        }

           int i=4;
      while(q.size()>0){
         q.top();
         hm.insert({q.top(),to_string(i)});
         i++;
         q.pop();
      }
      vector<string>res;
     for(auto k:score){
         res.push_back(hm[k]);
     }
      return res;
     
     
    }
};