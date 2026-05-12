class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      unordered_map<int,int>hs;
      vector<int>res;
      for(int i=0;i<nums.size();i++){
         int x=target-nums[i];
         if(hs.find(x)!=hs.end()){
              res.push_back(i);
              res.push_back(hs[x]);;
         }
         hs[nums[i]]=i;




      }

      return res;
    }
};