class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
      
    set<int>s;
     for(auto num:nums) {
        for(int i=2;i<=num;i++){
            while(num>0){
                if(num%i==0){
                    s.insert(i);
                    cout<<i;
                    num=num/i;
                }
                else{
                    break;
                }
            }
        }
     }

       return s.size();
        
    }
};