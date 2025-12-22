class Solution {
public:
  int convert(string s){
    int num=0;
    int pow=1;
      for(int i=s.size()-1;i>=0;i--){
          num+=(s[i]-'0')*pow;
          pow*=2;
      }
      return num;
  }


int rev(int x){
        int num=0;
        string res="";
        while(x>0){
          int rem=x%2;
          res+=to_string(rem);
          x=x/2;
         
       }
        
        return  convert(res);
     
       }
    vector<int> sortByReflection(vector<int>& nums) {
        vector<pair<int,int>>sol;
       
     for(auto x:nums){
         sol.push_back({rev(x),x});
     }
       sort(sol.begin(),sol.end());
    vector<int>res;
    for(auto k:sol){
          res.push_back(k.second);
    }

      return res; 
       
    }
};