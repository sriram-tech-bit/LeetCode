class Solution {
public:
    int countElements(vector<int>& nums, int k) {
    
    int  count=0;
    int n=nums.size();
    sort(nums.begin(),nums.end());
    for(int i=0;i<n;i++){
        
    int indx=n-(upper_bound(nums.begin(),nums.end(),nums[i])-nums.begin());
        
       
       
       if(indx>=k){
        count++;
       


    }
}
return count;

    }

     
};