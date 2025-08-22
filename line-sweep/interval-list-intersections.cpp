class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
      vector<vector<int>>sol;
      for(int i=0;i<firstList.size();i++){
          int ts=firstList[i][0];
          int te=firstList[i][1];
        for(int j=0;j<secondList.size();j++){
            int ns=secondList[j][0];
            int ne=secondList[j][1];
            if(ns>te || ts>ne){
               continue;
            }
            else{
                int res=max(ts,ns);
                int res2=min(te,ne);
                sol.push_back({res,res2});
            }
        }
      } 
      return sol;
    }
};