class Solution {
public:
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
    vector<vector<int>>adj(n);
        for(int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int vv=edges[i][1];
            adj[u].push_back(vv);
            adj[vv].push_back(u);
            
        }
        vector<int>vis(n,false);
        int good=0;
        for(int i=0;i<n;i++){
        int node=0;
        int edgecount=0;
            if(vis[i]==false){
            
             queue<int>q;
             q.push(i);
             vis[i]=true;
             while(q.size()>0){
               int nn=q.front();
                node++;
                edgecount+=adj[nn].size();
                q.pop();
               for(int j=0;j<adj[nn].size();j++){
                   if(vis[adj[nn][j]]!=true){
                     q.push(adj[nn][j]);
                     vis[adj[nn][j]]=true;
                   }
               }
               
             
               }
                 edgecount=edgecount/2;
               if(edgecount==(node*(node-1))/2){
                   good++;
             }
              
            }
        }
        return good;

        
    }
};