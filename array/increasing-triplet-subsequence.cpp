class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int left =0;
        int right=0;
        for(int i=0;i<nums.size();i++){
       for(int j=0;j<i;j++){
           if(nums[i]>nums[j]){
            left++;
           }
       }
       for(int k=i+1;k<nums.size();k++){
          if(nums[i]<nums[k]){
            right++;
          }

       }
       if(right>0 && left>0){
        return true;
       }


        }

       return false;
    }
};