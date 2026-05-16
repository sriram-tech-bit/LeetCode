class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        set<int>s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        int c=1;
        int ans=INT_MIN;
        vector<int>res;

        for(auto k:s){
         res.push_back(k);
        }

        for(int i=0;i<res.size()-1;i++){
           if(res[i+1]-res[i]==1){
               c++;
           }
           else{
            c=1;
           }
           ans=max(ans,c);

        }

        return ans;


    }
};