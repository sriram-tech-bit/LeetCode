class Solution {
public:
    int largestPrime(int n) {
        vector<bool>sol(n+1,true);
        for(int i=2;i*i<=n;i++){
           if(sol[i]==true){
             for(int j=i*i;j<=n;j+=i){
                sol[j]=false;
             }
           }
        }
        int sum=0;
        int ans=0;
     for(int i=2;i<=n;i++) {
        if(sol[i]==true ){
           sum+=i;
        }
        if(sum<=n && sol[sum]==true){
             ans=sum;
        }

     }  
         return ans;
    }
};