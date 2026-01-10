class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
 int n=tasks.size();
 int m=tasks[0].size();
    int ans=INT_MAX;  
   for(int i=0;i<n;i++){
    int sum=0;
    for(int j=0;j<m;j++){
     sum+=tasks[i][j];
        
    }
    ans=min(sum,ans);
   }
   return ans;
    }
    
};