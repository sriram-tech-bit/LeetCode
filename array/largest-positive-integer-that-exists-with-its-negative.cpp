class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_map<int,int>hm;
        for(int i=0;i<nums.size();i++){
            if(hm.find(-nums[i])!=hm.end()){
                 return abs(nums[i]);
            }
            hm[nums[i]]=i;
        }
         return -1;
    }
};