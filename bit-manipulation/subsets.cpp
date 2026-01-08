class Solution {
public:
  void  printsubset(int i,vector<int>&sol,vector<int>&arr,int n,vector<vector<int>>&res){
   
    if(i==n){
    
        res.push_back(sol);
 
    
        return ;
    }
      sol.push_back(arr[i]);
      printsubset(i+1,sol,arr,n,res);
      sol.pop_back();
      printsubset(i+1,sol,arr,n,res);


  }

    vector<vector<int>> subsets(vector<int>& nums) {
    
     vector<int>sol;
     vector<vector<int>>res;
   printsubset(0,sol,nums,nums.size(),res);
  


   return res;
        
    }
};