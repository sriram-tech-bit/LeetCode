class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
sort(intervals.begin(),intervals.end());  
    vector<int>temp=intervals[0];
    vector<vector<int>>sol;
   
    for(int i=1;i<intervals.size();i++){
        int ts=temp[0];
        int te=temp[1];
        int cs=intervals[i][0];
        int ce=intervals[i][1];
        if(cs>te|| ts>cs){
        sol.push_back(temp);
        temp[0]=intervals[i][0];
        temp[1]=intervals[i][1];

        }
        else{
           int res=min(ts,cs);
           int res2=max(te,ce);
           temp[0]=res;
           temp[1]=res2;
          
        }
    }
    sol.push_back(temp);
   
     return sol;

   }

};