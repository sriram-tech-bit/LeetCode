class Solution {
public:
  void print(int i, int n, int k, vector<int>& sol, vector<vector<int>>& res){
    if(sol.size() == k){
        res.push_back(sol);
        return;
    }
    for(int j = i; j <= n; j++){
        sol.push_back(j);
        print(j + 1, n, k, sol, res);
        sol.pop_back();
    }
}


    vector<vector<int>> combine(int n, int k) {
         vector<int>sol;
         
         vector<vector<int>>res;
         int i=1;
         int j=2;
        print(1,n,k,sol,res);
        return res;


    }
};