class Solution {
public:
    string getPermutation(int n, int k) {
          string s="";
          
          for(int i=1;i<=n;i++){
              s+=to_string(i);
          }
          int i=1;
         while(i<k){
        int k=n-1;
            int flag=0;
            for(int i=n-2;i>=0;i--){
                
                if(s[i]<s[k]){
                    k=i;
                    flag=-1;
                    break;
                }
                else{
                    k=i;
                }
            }
            if(flag==0){
             
               return s;
            }
            int m=0;
            for(int i=n-1;i>=0;i--){
                if(s[i]>s[k]){
                    m=i;
                    break;
                }
            }
            swap(s[k],s[m]);
            int p1=k+1;
            int p2=n-1;
            while(p1<p2){
                swap(s[p1],s[p2]);
                p1++;
                p2--;
            }

           i++;
        }
          return s;
    }
};