class Solution {
public:
    void print(int i,vector<int>&sol,vector<vector<int>>&res,int n,vector<pair<int,int>>&f){
       if(i==n){
        res.push_back(sol);
        return ;
       }

     print(i+1,sol,res,n,f);
     int ele=f[i].first;
     int sec=f[i].second;
      for(int j=0;j<sec;j++){
        sol.push_back(ele);
         print(i+1,sol,res,n,f);
      }
      for(int j=0;j<sec;j++){
        sol.pop_back();
        
      }
      return ;
     

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
       unordered_map<int,int>hm;
       for(int i=0;i<nums.size();i++){
        hm[nums[i]]++;
       }
       vector<pair<int,int>>f;
       for(auto k:hm){
         f.push_back({k.first,k.second});

       }
       vector<vector<int>>res;
       vector<int>sol;
        print(0,sol,res,f.size(),f);
      return res;
       

        
    }
};