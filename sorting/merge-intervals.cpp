class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;
        vector<int>temp=intervals[0];
        for(int i=1;i<intervals.size();i++){
        int cs=intervals[i][0];
        int ce=intervals[i][1];
        int ts=temp[0];
        int te=temp[1];
        if(cs>te|| ts>cs){
            ans.push_back(temp);
            temp=intervals[i];
        }
        else{
          int res=max(ce,te);
           temp[1]=res;
            }
        }
        ans.push_back(temp);
        return ans;
    }
};