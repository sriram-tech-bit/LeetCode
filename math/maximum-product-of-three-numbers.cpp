class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int count=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]<0){
            count++;
        }
    }
    sort(nums.begin(),nums.end(),greater<int>());
    int ans=0;
    if(count>=2){
      int p1=nums[0];
      int p2=nums[nums.size()-1];
      int p3=nums[nums.size()-2]; 
      ans=p1*p2*p3;
    }
    else{
         int p1=nums[0];
         int p2=nums[1] ;
         int p3=nums[2];
         ans=p1*p2*p3;
    }
    return ans;
    }
       
};