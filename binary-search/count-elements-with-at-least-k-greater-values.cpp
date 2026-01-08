class Solution {
public:
    int countElements(vector<int>& nums, int k) {
     unordered_set<int>hs;
      for(int i=0;i<nums.size();i++){
          hs.insert(nums[i]);
      } 
      vector<int>sol;
      for(auto k:hs){
        sol.push_back(k);
      }
      sort(sol.begin(),sol.end());
     int count=0;
     int n=sol.size()-1;
     for(int i=0;i<n;i++){
          int val=n-i;
          if(val>=k){
            count++;
          }
     }
        return count;
    }
};