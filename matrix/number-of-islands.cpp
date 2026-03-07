class Solution {
public:
void bfs(int row,int col,vector<vector<int>>&vis,vector<vector<char>>&grid){
   queue<pair<int,int>>q;
   q.push({row,col});
   int n=grid.size();
   int m=grid[0].size();
   vis[row][col]=1;
   
   vector<int> r={-1,0,1,0};
   vector<int> c={0,1,0,-1};
    while(q.size()>0){
     int nrow=q.front().first;
     int ncol=q.front().second;
     q.pop();
    for(int i=0;i<r.size();i++){
        int arow=nrow+r[i];
        int acol=ncol+c[i];
        if(arow<n && acol<m && arow>=0 && acol>=0 && grid[arow][acol]=='1' && vis[arow][acol]==0){
            vis[arow][acol]=1;
            q.push({arow,acol});
        }
    }

    }



}
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int c=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          if(grid[i][j]=='1' && vis[i][j]==0){
          c++;
          bfs(i,j,vis,grid);

          }
        }
    }

   return c;
    }
};