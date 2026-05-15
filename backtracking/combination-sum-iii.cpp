class Solution {
public:
  void print(int start,int sum,int k,int n,vector<vector<int>>&res,vector<int>&temp){
   if(temp.size()==k){
     if(sum==n){
        res.push_back(temp);

     }

     return ;

   }
    

   for(int i=start;i<=9;i++){
        temp.push_back(i);
        
        print(i+1,sum+i,k,n,res,temp);
        
        
        temp.pop_back();
    }
  }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>res;
        vector<int>temp;
        print(1,0,k,n,res,temp);
        return res;
    }
};