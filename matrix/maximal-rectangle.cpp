class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
      vector<vector<int>>sol(n,vector<int>(m)); 
      for(int j=0;j<m;j++){
         int count=0;
        for(int i=0;i<n;i++){
           
            if(matrix[i][j]=='1'){
                count++;
            }
            else{
                count=0;
            }
            sol[i][j]=count;
        }
      }
      int ans=INT_MIN;
      for(int i=0;i<n;i++){
       ans=max(ans,largestRectangleArea(sol[i]));
      }
      return ans;
    }
      int largestRectangleArea(vector<int>& heights) {
      int n=heights.size();
      vector<int>p1(n,-1);
      stack<int>res;
      for(int i=0;i<n;i++){
        while(res.size()>0 && heights[res.top()]>=heights[i]){
            res.pop();
        }
        if(res.size()>0){
            p1[i]=res.top();
        }
        
        res.push(i);

      }


      vector<int>p2(n,n);
      stack<int>res2;
      for(int i=n-1;i>=0;i--){
        while(res2.size()>0 && heights[res2.top()]>=heights[i]){
            res2.pop();
        }
        if(res2.size()>0){
            p2[i]=res2.top();
        }
       
        res2.push(i);

      }
   int ans=INT_MIN;
   for(int i=0;i<n;i++){
      ans=max(ans,heights[i]*(p2[i]-p1[i]-1));
   }



    return ans;

    }
        
};