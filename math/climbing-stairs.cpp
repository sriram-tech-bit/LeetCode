class Solution {
  public:
  
  int ways(int i,int dp[]){
    if(i<0){
        return 0;
    }
      if(i==0){
          return 1;
      }
      
      if(dp[i]==(-1)){
          dp[i]=ways(i-1,dp)+ways(i-2,dp);
      }
      return dp[i];
      
  }
    int climbStairs(int n) {
        int dp[n+1];
        for(auto &k:dp){
            k=-1;
        }
        return ways(n,dp);
        
    }
};
