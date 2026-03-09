class Solution {
public:
 int orangesRotting(vector<vector<int>>& grid) {
      int n=grid.size();
      int m=grid[0].size();
      vector<vector<int>>vis(n,vector<int>(m,0));
      queue<pair<pair<int,int>,int>>q;
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]==2){
                vis[i][j]=2;
                q.push({{i,j},0});
            }
            else{
                vis[i][j]=0;
            }
        }
      }

      int tm=0;
      vector<int>r={-1,0,1,0};
      vector<int>c={0,1,0,-1};
      while(q.size()>0){
        int prow=q.front().first.first;
        int pcol=q.front().first.second;
        int t=q.front().second;
        tm=max(tm,t);
        q.pop();
        for(int i=0;i<4;i++){
            int arow=prow+r[i];
            int  acol=pcol+c[i];
            if(arow<n && acol<m && arow>=0 && acol>=0 && grid[arow][acol]==1 && vis[arow][acol]==0){
                 vis[arow][acol]=2;
                 q.push({{arow,acol},t+1});

            }
         
        }

      }
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(vis[i][j]!=2 && grid[i][j]==1){
                return -1;
            }
        }
      }
      return tm;
 }   
};