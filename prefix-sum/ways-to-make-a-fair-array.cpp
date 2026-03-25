class Solution {
public:
    int waysToMakeFair(vector<int>& nums) {
         int c=0;
      for(int i=0;i<nums.size();i++){
        int odd=0;
        int even=0;
       
         for(int j=i+1;j<nums.size();j++){
              if(j%2==0){
                odd+=nums[j];
              }
              else{
                even+=nums[j];
              }
         }

         for(int k=0;k<i;k++){
             if(k%2==0){
                even+=nums[k];
             }
             else{
                odd+=nums[k];
             }
         }
         if(odd==even){
           c++;
         }
      }
       return c;
    }
};