class Solution {
public:
    int countPartitions(vector<int>& nums) {
       int total=0;
       int n=nums.size();
       for(int i=0;i<n;i++){
         total+=nums[i];
       } 
       int c=0;
       int parts=0;
       for(int i=0;i<n-1;i++){
          c+=nums[i];
          total=total-c;
          if((abs(total-c))%2==0){
             parts++;  
          }
          total+=c;
       }
       return parts;
    }
};