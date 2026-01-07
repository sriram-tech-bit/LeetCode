class Solution {
public:
    int minLength(vector<int>& nums, int k) {
        int n=nums.size();
       int ans=INT_MAX;
       bool flag=false;
        vector<int>sol;
        int sum=0;
      for(int i=0;i<n;i++){
          sol.push_back(nums[i]);
          
          for(int i=0;i<sol.size();i++){
              sum+=sol[i];
          }
          if(sum>=k){ 
            int n=sol.size();
            ans=min(ans,n);
            
              sum-=sol[0];
              flag=true;
             sol.erase(sol.begin());
            
          }
      }
      if(flag==false){
         return -1;
      }
      return ans;
    }
};