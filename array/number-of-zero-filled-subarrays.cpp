class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int totalc=0;
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                c++;
            }
            else{
                totalc+=(c*(c+1))/2;
                
                c=0;
            }

        }
         totalc+=(c*(c+1))/2;

         return totalc;
    }
};