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
        q.push(source);
        vis[source]=true;
        while(q.size()>0){
            int front=q.front();
            q.pop();
            for(int i=0;i<adj[front].size();i++){
                if(vis[adj[front][i]]!=true){
                    vis[adj[front][i]]=true;
                    q.push(adj[front][i]);
                }
            }
        }
        return vis[destination];
    }  
};