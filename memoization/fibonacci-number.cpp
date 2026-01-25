class Solution {
public:
  int calfib(int i,int dp[]){
    if(i<=1){
        return i;
    }
    if(dp[i]==-1){
        dp[i]=calfib(i-1,dp)+calfib(i-2,dp);


    }
    return dp[i];

  }
    int fib(int n) {
    int dp[n+1];
     for(int i=0;i<=n;i++){
        dp[i]=-1;
     }
    
      int k= calfib(n,dp);
      return k;

    }
};