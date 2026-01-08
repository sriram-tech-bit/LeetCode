class Solution {
public:
    int countElements(vector<int>& nums, int k) {
    if(nums.size()==1){
        return 1;
      }
     unordered_set<int>hs;
      for(int i=0;i<nums.size();i++){
          hs.insert(nums[i]);
      } 
      
      vector<int>sol;
      for(auto m:hs){
        sol.push_back(m);
      }
      sort(sol.begin(),sol.end());
     int count=0;
     int n=sol.size()-1;
     for(int i=0;i<=n;i++){
          int val=n-i;
          if(val>=k){
            count++;
          }
     }
        return count;
    }
};