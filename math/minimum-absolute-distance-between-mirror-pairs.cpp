class Solution {
public:
    int minMirrorPairDistance(vector<int>& nums) {
           unordered_map<int,int>hm;
           vector<int>num(nums.size());
        for(int i=0;i<nums.size();i++){
            int k=nums[i];
                int sum=0;
                while(k>0){
                 
                 sum+=k%10;
                 k=k/10;
                }
              num[i]=sum;
        } 
           int ans=INT_MAX;
           bool flag=false;
        for(int i=0;i<num.size();i++){
           if(hm.find(num[i])!=hm.end() && nums[i]%10!=0){
                int d=abs(i-hm[i]);
                ans=min(ans,d);
                flag=true;
           }
           else{
              hm.insert({num[i],i});
           }
        }
      if(flag==false){
        return -1;
      }

        return ans;
    }
};