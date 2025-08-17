class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>ans;
       for(int i=0;i<intervals.size();i++){
           int cs=intervals[i][0];
           int ce=intervals[i][1];
           int ns=newInterval[0];
           int ne=newInterval[1];
           if(ns>ce || cs>ne){
               if(ce<ns ){
                 ans.push_back(intervals[i]);
               }
               else{
                ans.push_back(newInterval);
                for(int j=i;j<intervals.size();j++){
                     ans.push_back(intervals[j]);
                     
                }
                       return ans;
               }
           }
           else{
              int ma=max(ne,ce);
              int mi=min(cs,ns);
              newInterval[0]=mi;
              newInterval[1]=ma;

           }
          
       }
             ans.push_back(newInterval);
             return ans;
    }
};