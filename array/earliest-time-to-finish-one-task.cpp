class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
 int n=tasks[0].size();
    int sum1=0;
     for(int i=0;i<n;i++){
         sum1+=tasks[0][i];
     }
   
    sort(tasks.begin(),tasks.end(),[](auto &a,auto &b){
     return a[1]<b[1];
    });
   int sum=0;
     for(int i=0;i<n;i++){
         sum+=tasks[0][i];
     }
     return min(sum,sum1);
        
    }
};