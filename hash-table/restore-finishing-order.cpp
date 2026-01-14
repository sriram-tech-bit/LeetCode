class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int>res;
        unordered_set<int>hs;
        for(auto k:friends){
            hs.insert(k);
        }  
        for(auto m:order){
            if(hs.find(m)!=hs.end()){
                res.push_back(m);
            }
        }


     return res;
    }
};