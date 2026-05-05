class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
       vector<int>spf(1000+1);
       for(int i=0;i<=1000;i++){
          spf[i]=i;
       }
      for(int i=2;i*i<=1000;i++){
        if(spf[i]==i){
        for(int j=i;j*i<=1000;j++){
            if(spf[j*i]==j*i){
                spf[j*i]=i;
            }
        }

        }
      }
      set<int>s;
   for(auto num:nums){
     int k=num;
      while(k!=1){
        s.insert(spf[k]);
        k=k/spf[k];
      }
   }

    return s.size();

    }


};