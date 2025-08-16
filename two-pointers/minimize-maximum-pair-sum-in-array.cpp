class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int p1=0;
        int p2=nums.size()-1;
        int max=INT_MIN;
        while(p1<p2){
            int sum=nums[p1]+nums[p2];
               if(sum>max){
                max=sum;
               }
               p1++;
               p2--;
        }
       return max;
    }
};