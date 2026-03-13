class Solution {
public:
int n;
  pair<int,int> getcoordinates(int num){
   int rt=(num-1)/n;
   int rb=(n-1)-rt;
   int col=(num-1)%n;
   if((n%2==0 && rb%2==0) || (n%2==1 &&  rb%2==1)){
      col=(n-1)-col;
   }

      return make_pair(rb,col);
  }
    int snakesAndLadders(vector<vector<int>>& board) {
         n=board.size();
        int m=board[0].size();
        vector<vector<bool>>vis(n,vector<bool>(m,false));
        queue<int>q;
        q.push(1);
        vis[n-1][0]=true;
       int steps=0;
        while(q.size()>0){
            int N=q.size();
            while(N--){
                int x=q.front();
                q.pop();
                if(x==n*n){
                    return steps;
                }
                
                for(int i=1;i<=6;i++){
                    if(x+i>n*n){
                    break;
                }
                      pair<int,int> t=getcoordinates(x+i);
                      int row= t.first;
                      int col=t.second;
                      if(vis[row][col]==true){
                        continue;
                      } 
                      vis[row][col]==true;
                      if(board[row][col]!=-1){
                          q.push(board[row][col]);
                      }
                      else{
                        q.push(x+i);
                      }
                }
            }
            steps++;
        }
        return -1;
    }

};

