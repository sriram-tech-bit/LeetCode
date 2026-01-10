class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
     sort(nums.begin(),nums.end(),greater<int>());
     vector<int>res;
      int n=nums[0];
      res.push_back(n);
      
      for(int i=1;i<nums.size();i++){
          if(nums[i]==n){
           continue;
            n=nums[i];
          }
          else{
            if(res.size()<k){
            res.push_back(nums[i]);
            n=nums[i];
           
          }
          }
      }

        return res;

    }
};