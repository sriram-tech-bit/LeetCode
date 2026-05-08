class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res;
        unordered_map<int,int>hm1;
        
         for(auto m:nums1){
             hm1[m]++;
         }
         for(auto k:nums2){
            if(hm1[k]>0){
               res.push_back(k) ;
               hm1[k]--;
            }
         }

         return res;

    
        
    }
};