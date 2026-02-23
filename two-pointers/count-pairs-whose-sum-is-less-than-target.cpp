class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int p1=0;
        int p2=n-1;
        int count=0;
         while(p1<p2){
             if(nums[p1]+nums[p2]<target){
                 count+=p2-p1; 
                 p1++;
                
                
             }
             else{
                p2--;
             }
         }
         return count;

    }
};