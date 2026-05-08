class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res;
        unordered_map<int,int>hm1;
         unordered_map<int,int>hm2;
         for(auto m:nums1){
             hm1[m]++;
         }
    for(auto m:nums2){
             hm2[m]++;
         }
     for(auto k:hm1){
        if(hm2.find(k.first)!=hm2.end()){
            if(k.second==hm2[k.first]){
              for(int i=0;i<k.second;i++){
                res.push_back(k.first);
              }   
            }
            else{
                res.push_back(k.first);
            }
        }
     }
     return res;
        
    }
};