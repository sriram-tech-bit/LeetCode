class Solution {
public:
  void priper(int i,vector<int>&b,int n,vector<int>&nums,vector<vector<int>>&ans,vector<int>&sol){
    if(i==n){
        ans.push_back(sol);
        return ;
    }
    for(int j=0;j<n;j++){
      if(b[j]==1){
        b[j]=0;
        sol[i]=nums[j];
        priper(i+1,b,n,nums,ans,sol);
        b[j]=1;


      }

    }
    return ;

  }

   
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        int n=nums.size();
        vector<int>sol(n);
        vector<int>block(n,1);
        priper(0,block,n,nums,ans,sol);
     return ans;

        }

        
    
};