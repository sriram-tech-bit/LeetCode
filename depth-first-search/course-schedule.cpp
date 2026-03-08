class Solution {
public:
    bool canFinish(int V, vector<vector<int>>& edges) {
         vector<vector<int>>adj(V);
       vector<int>income(V,0);
       for(int i=0;i<edges.size();i++){
           int u=edges[i][0];
           int v=edges[i][1];
           adj[u].push_back(v);
           income[v]++;
       }
       vector<int>res;
       
       queue<int>q;
       for(int i=0;i<V;i++){
           if(income[i]==0){
                q.push(i);
           }
       }
       while(q.size()>0){
          int u=q.front();
          q.pop();
          res.push_back(u);
          for(int i=0;i<adj[u].size();i++){
              int v=adj[u][i];
              income[v]--;
              if(income[v]==0){
                  q.push(v);
              }
          }
           
           
       }
       if(res.size()!=V){
           return false;
       }
       
       return true;
        
    }
};