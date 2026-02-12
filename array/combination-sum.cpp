class Solution {
public:
void print(int i,int target,vector<int>&candidates,int n,vector<int>&ds,vector<vector<int>>& sol){
    if(i==n){
        if(target==0){
            sol.push_back(ds);
        }
        return ;
    }
    if(candidates[i]<=target){
 ds.push_back(candidates[i]);
print(i,target-candidates[i],candidates,n,ds,sol);
ds.pop_back();
}
print(i+1,target,candidates,n,ds,sol);


}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>ds;
        int n=candidates.size();
        vector<vector<int>>sol;
         print(0,target,candidates,n,ds,sol);
     return sol;
    }
};