class Solution {
public:
    int maxProduct(vector<int>& nums) {
      long long ans=0;
      for(int i=0;i<nums.size();i++){
        nums[i]=nums[i]-1;
      }
      for(auto k:nums){
        cout<<k;
      }
       
       sort(nums.begin(),nums.end(),greater<int>());
       return nums[0]*nums[1];

    }
};