class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
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
            c=0;
           }
           ans=max(ans,c);

        }

        return ans;


    }
};