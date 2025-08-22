class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
     vector<int>temp=intervals[0];
       int count=1;
       for(int i=1;i<intervals.size();i++){
        int ts=temp[0];
        int te=temp[1];
        int cs=intervals[i][0];
        int ce=intervals[i][1];
        if(cs<te && ts<ce){
            count++;
            temp[0]=intervals[i][0];
            temp[1]=intervals[i][1];
        }
       }  
           return count;
    }
};