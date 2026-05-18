class Solution {
public:
bool issafe(vector<string>&board,int r,int c,int n){
 for(int i=0;i<n;i++){
    if(board[r][i]=='Q'){
        return false;
    }
 }
    for(int i=0;i<n;i++){
        if(board[i][c]=='Q'){
            return false;
        }
    }

    for(int i=r,j=c;i>=0&&j>=0;i--,j--){
        if(board[i][j]=='Q'){
            return false;
        }
    }
 


 for(int i=r,j=c;i>=0 && j<n;i--,j++){
    if(board[i][j]=='Q'){
        return false;
    }
 }

    return true;

}
void nqueens(vector<string>&board,vector<vector<string>>&ans,int n,int row){

 if(row==n){
    ans.push_back(board);
    return ;
 }
    for(int j=0;j<n;j++){
        if(issafe(board,row,j,n)){
           board[row][j]='Q';
           nqueens(board,ans,n,row+1);
           board[row][j]='.';

        }
    }


}
    vector<vector<string>> solveNQueens(int n) {
        vector<string>board(n,string(n,'.'));
        vector<vector<string>>ans;
        nqueens(board,ans,n,0);
        return ans;
    }
};