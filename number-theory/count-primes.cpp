class Solution {
public:
    int countPrimes(int n) {
        vector<bool>res(true,n+1);
        res[0]=res[1]=false;

        for(int i=2;i*i<=n;i++){
           if(res[i]){
            for(int j=i*i;j<=n;j+=i){
                res[j]=false;
            }
           }
        }
        int count=0;

        for(int i=2;i<n;i++){
               if(res[i]){
                count++;
               }
        }
        return count;
    
    }
};