class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_set<int>hs;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
            hs.insert(nums[i]);
            }
        }
        return hs.size();
        
    }
};