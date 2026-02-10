class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
     vector<bool> f(n+1,false);
     queue<int>q;
     q.push(source);
     f[source]=true;
     vector<int>g[n+1];
     for(int i=0;i<edges.size();i++){
        int u=edges[i][0];
        int v=edges[i][1];
        g[u].push_back(v);
        g[v].push_back(u);

     }
      while(q.size()>0){
        int v=q.front();
        q.pop();
        for(int i=0;i<g[v].size();i++){
            if(f[g[v][i]]==false){
                q.push(g[v][i]);
                f[g[v][i]]=true;

            }
        }

      }
   return f[destination];
        
    }
};