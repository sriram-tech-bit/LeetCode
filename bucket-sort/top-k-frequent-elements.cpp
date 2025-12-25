class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<int>pq;
     unordered_map<int,int>hm;
     for(auto k:nums){
        hm[k]++;
     }
     vector<pair<int,int>>vec;
     
     for(auto k:hm){
         vec.push_back({k.first,k.second});
     }
     
     sort(vec.begin(),vec.end(),[](auto& a,auto &b ){
        return a.second>b.second;
     });
     int count=0;
      vector<int>res;
     for(auto s:vec){
        if(count<k){
            res.push_back(s.first);
            count++;
        }
        else{
            break;
        }
     }
      return res;

    }

   
};