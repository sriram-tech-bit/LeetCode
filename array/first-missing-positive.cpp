class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            while(nums[i]!=i+1){
                int x=nums[i];
                int index=x-1;
                if(index<0 || index>=nums.size()){
                    break;
                }
                if(nums[i]==i+1){
                    break;
                }
                int temp=nums[index];
                nums[index]=nums[i];
                nums[i]=temp;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=i+1){
                return i+1;
            }
             
        }
         return nums.size()+1;
    }
};