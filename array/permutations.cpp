class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
          vector<vector<int>>ans;
          sort(nums.begin(),nums.end());
         ans.push_back(nums);
          int n=nums.size();
          
         while(1){
            int k=n-1;
            int flag=0;
            for(int i=n-2;i>=0;i--){
                
                if(nums[i]<nums[k]){
                    k=i;
                    flag=-1;
                    break;
                }
                else{
                    k=i;
                }
            }
            if(flag==0){
             
               return ans;
            }
            int s=0;
            for(int i=n-1;i>=0;i--){
                if(nums[i]>nums[k]){
                    s=i;
                    break;
                }
            }
            swap(nums[k],nums[s]);
            int p1=k+1;
            int p2=n-1;
            while(p1<p2){
                swap(nums[p1],nums[p2]);
                p1++;
                p2--;
            }
                ans.push_back(nums);
          }
            return ans;
    }
};