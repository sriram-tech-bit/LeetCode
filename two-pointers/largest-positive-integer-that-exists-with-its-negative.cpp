class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_map<int,int>hm;
        int largest=-1;
        for(int i=0;i<nums.size();i++){
            if(hm.find(-nums[i])!=hm.end()){
               largest=max(largest,abs(nums[i]));
            }
            hm[nums[i]]=i;
        }
         return largest;
    }
};