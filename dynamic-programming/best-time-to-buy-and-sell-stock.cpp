class Solution {
public:
    int maxProfit(vector<int>& nums) {
         int n=nums.size();
         int sell=nums[0];
         int ans=0;
         for(int i=1;i<n;i++){
            bool flag=true;
           if(nums[i]>sell){
               flag=false;
               ans=max(ans,nums[i]-sell);
               sell=min(sell,nums[i]);
           }
           if(flag){
            sell=nums[i];
           }
         }
         return ans;
    }
};