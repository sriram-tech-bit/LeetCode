class Solution {
public:
    int minLength(vector<int>& nums, int k) {
        unordered_map<int,int>hm;
        int uniquesum=0;
        int ans=INT_MAX;
        int n=nums.size();
        bool flag=true;
    int l=0;
    int r=0;
    hm[nums[r]]++;
    uniquesum+=nums[r];
    while(r<n){
      if(uniquesum<k){
         r++;
         if(r<n){
         hm[nums[r]]++;
         if(hm[nums[r]]==1){
            uniquesum+=nums[r];
         }
         }


        

      }
      while(uniquesum>=k){
        ans=min(ans,r-l+1);
           flag=false;
           hm[nums[l]]--;
           if(hm[nums[l]]==0){
            uniquesum-=nums[l];
           }
           l++;
        

      }

    }
    if(flag){
        return -1;
    }
    return ans;

        
    }
};