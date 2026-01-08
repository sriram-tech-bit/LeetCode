class Solution {
public:
  void printpar(int o,int c,string &res,vector<string>&sol,int n){
      if(o==n && c==n){
         sol.push_back(res);
         return ;
      }

     if(o<n){
          res.push_back('(');
          printpar(o+1,c,res,sol,n);
          res.pop_back();
     }
     if(c<o){
        res.push_back(')');
         printpar(o,c+1,res,sol,n);
         res.pop_back();

     }

  }


    vector<string> generateParenthesis(int n) {
         string res="";
         vector<string>sol;
        printpar(0,0,res,sol,n);

        return sol;
    }
};