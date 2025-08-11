class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
       int p1=0;
       int p2=p1+1;
       int count=0;
       while(p2<nums.size() && p1<nums.size()){
        if(p1==p2){
            p2++;
        }
           if(nums[p2]-nums[p1]==k){
                 int val=p1;
                 int val2=p2;
                 count++;
                 while(val<nums.size() && nums[val]==nums[p1]){
                        val++;
                }
                while(val2<nums.size() && nums[val2]==nums[p2]){               val2++;

                }
                p1=val;
                p2=val2;
           }
           else if(nums[p2]-nums[p1]<k){
            p2++;
           }
           else{
            p1++;
            if(p1==p2){
                p2++;
            }
           }
       }
       return count;
    }
};