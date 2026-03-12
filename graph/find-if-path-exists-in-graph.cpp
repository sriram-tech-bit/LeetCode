class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        int c=0;
        vector<vector<int>>adj(n);
        vector<int>vis(n,false);
        for(int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        queue<int>q;
        for(int i=0;i<n;i++){
           if(vis[i]==false){
              if(vis[destination]==true){
                return true;
              }
              c++;
              q.push(i);
              vis[i]=true;
              while(q.size()>0){
                int u=q.front();
                q.pop();
                for(int j=0;j<adj[u].size();j++){
                    if(vis[adj[u][j]]!=true){
                         vis[adj[u][j]]=true;
                         q.push(adj[u][j]);  
                    }
                }
              }

           }
        }
        if(c==1){
            return true;
        }
        return false;
        
    }
};