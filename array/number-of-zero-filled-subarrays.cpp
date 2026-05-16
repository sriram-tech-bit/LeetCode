class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
    long long totalc=0;
        long long c=0;
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