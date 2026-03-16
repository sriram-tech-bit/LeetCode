class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
      unordered_set<int>hs;
      for(int i=0;i<nums.size();i++){
        hs.insert(nums[i]);
      }
      
      int c=0;
      for(int i=0;i<nums.size();i++){
         if(hs.find(nums[i]+2*diff)!=hs.end() && hs.find(nums[i]+diff)!=hs.end() ){
            c++;
         }
        
        
      }
         return c;
    }     
};