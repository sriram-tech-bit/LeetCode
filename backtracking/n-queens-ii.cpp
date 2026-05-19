class Solution {
public:

 bool issafe(int row,int col,int n,vector<vector<int>>&board){
    for(int i=0;i<n;i++){
        if(board[row][i]==1){
            return false;
        }
    }

    for(int i=0;i<n;i++){
        if(board[i][col]==1){
            return false;
        }
    
        
    }

    for(int i=row,j=col;i>=0 &&  j>=0;i--,j--){
        if(board[i][j]==1){
            return false;
        }
    }

    for(int i=row,j=col;i>=0 && j<n;i--,j++){
        if(board[i][j]==1){
            return false;
        }
    }
     return true;
 }
 void print(vector<vector<int>>&board,int n,int r,int &count){
    if(r==n){
        count++;
        return;
    }

    for(int j=0;j<n;j++){
      if(issafe(r,j,n,board)) {
        board[r][j]=1;
        print(board,n,r+1,count);
        board[r][j]=0;
      }  
    }

 }

   
     

    int totalNQueens(int n) {
     vector<vector<int>>board(n,vector<int>(n,0));
     int c=0;
     print(board,n,0,c);
     return c;

    }
};