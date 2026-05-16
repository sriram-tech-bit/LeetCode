class Solution {
public:
void print(int i,vector<int>&nums,vector<vector<int>>&res,int n,vector<int>&temp){
  if(i==n){
      res.push_back(temp);
    return ;
  }
  temp.push_back(nums[i]);
  print(i+1,nums,res,n,temp);
  temp.pop_back();
  int index=i+1;
  while(index<n && nums[index]==nums[index-1]) index++;
  print(index,nums,res,n,temp);



}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>res;
        vector<int>temp;
        int n=nums.size();
        print(0,nums,res,n,temp);
        
      return res;

    }
};