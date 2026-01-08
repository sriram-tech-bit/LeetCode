class Solution {
public:
    int countElements(vector<int>& nums, int k) {
    int  count=0;
    int n=nums.size();
    sort(nums.begin(),nums.end());
    for(int i=0;i<n;i++){
       if(nums[n-1]==nums[i]){
        break;
       }
       else{
       int m=n-(i+1);
       if(m>=k){
        count++;
       }


    }
}
return count;

    }

     
};