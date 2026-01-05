class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        priority_queue<int>pq;
        pq.push(nums[0]);
        int jumps=0;
        if(n==1){
            return 0;
        }
         while(pq.size()>0){
            int k=pq.top();
            jumps++;
            pq.pop();
            if(k>=n-1){
                return jumps;
            }
            for(int i=0;i<=k&&k<nums.size();i++  ){
                pq.push(i+nums[i]);
            }
         }
        return -1;
    }
};