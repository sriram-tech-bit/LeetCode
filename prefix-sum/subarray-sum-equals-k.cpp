class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       int l=0;
       int r=0;
       int sum=0;
       int count=0;
       
        while(r<nums.size()){
           sum+=nums[r];

           while(sum>k){
             sum-=nums[l];
             l++;
           }
           if(sum==k){
            count++;
           }
       r++;

          


          }

           return  count;
    

        }

       
};