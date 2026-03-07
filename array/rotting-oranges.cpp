class Solution {
public:
 int bfs(int row,int col,vector<vector<int>>&vis,vector<vector<int>>&grid){
    int ans=-1;
   int n=grid.size();
   int m=grid[0].size();
   queue<pair<pair<int,int>,int>>q;
   q.push({{row,col},0});
   vis[row][col]=2;
   vector<int> r={-1,0,1,0};
   vector<int> c={0,1,0,-1};
   int t=0;
  while(q.size()>0){
   int nrow=q.front().first.first;
   int ncol=q.front().first.second;
   int t=q.front().second;
   ans=max(ans,t);
    
   q.pop();
   for(int i=0;i<4;i++){
    int arow=nrow+r[i];
    int acol=ncol+c[i];
    if(arow<n && acol<m && arow>=0 && acol>=0 && grid[arow][acol]==1 && vis[arow][acol]!=2){
        vis[arow][acol]=2;
        grid[arow][acol]=2;
        q.push({{arow,acol},t+1});
    }
   }


  }
   return ans;

 }
    int orangesRotting(vector<vector<int>>& grid) {
       int n=grid.size();
       int m=grid[0].size();
       vector<vector<int>>vis(n,vector<int>(m,0));
       int c=0;
       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]==2 && vis[i][j]==0){
               c=max(c,bfs(i,j,vis,grid));
            }
        }
       }
       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]==1){
                return -1;
            }
        }
       }
       return c;
     
    }
};