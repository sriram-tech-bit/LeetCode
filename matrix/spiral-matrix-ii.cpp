class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
      vector<vector<int>>res(n,vector<int>(n));
      int k=1;
     int left=0;
     int top=0;
     int right =n-1;
     int bottom=n-1;
     while(top<=bottom && left<=right){
      for(int i=left;i<=right;i++){
      
           res[top][i]=k;
             k++;
           
      }
      
      top++;
      for(int j=top;j<=bottom;j++){
         
           res[j][right]=k;
           k++;
          
      }
     
      right--;
      if(top<=bottom){
       for(int j=right;j>=left;j--){
       res[bottom][j]=k;
       k++;
       }
      
        bottom--;
      }
      if(left<=right){
        for(int j=bottom;j>=top;j--){
            res[j][left]=k;
            k++;
        }
        
        left++;
      }

     }
     return res;
     
      

    }
};