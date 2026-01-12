class Solution {
public:
    int maxProduct(int n) {
      vector<int>res;
       while(n>0){
         res.push_back(n%10);
         n=n/10;
       }
       sort(res.begin(),res.end());
       int k=res.size();
       return res[k-1]*res[k-2];

    }
};