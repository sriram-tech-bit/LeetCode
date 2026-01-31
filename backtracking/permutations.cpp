class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
      sort(nums.begin(),nums.end());
        ans.push_back(nums);
        if(nums.size()==1){
            return ans;
        }
    
        while(1){
        next_permutation(nums.begin(),nums.end());
        ans.push_back(nums);
        if(is_sorted(nums.begin(),nums.end(),greater<int>())){
        return ans;

        }


        }

        
    }
};