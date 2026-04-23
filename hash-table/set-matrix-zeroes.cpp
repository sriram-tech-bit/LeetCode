class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
       int n=matrix.size();
       int m=matrix[0].size();
       vector<pair<int,int>>res;
       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           if(matrix[i][j]==0){
               res.push_back({i,j});
           }
        }

       }

       for(auto k:res){
        int i=k.first;
        int j=k.second;
        for(int p=0;p<m;p++){
            matrix[i][p]=0;
        }
        for(int l=0;l<n;l++){
            matrix[l][j]=0;
        }
        
       }

       
       
    }
};