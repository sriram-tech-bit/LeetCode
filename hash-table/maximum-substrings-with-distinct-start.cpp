class Solution {
public:
    int maxDistinct(string s) {
        unordered_set<char>hs;
        for(int i=0;i<s.size();i++){
            hs.insert(s[i]);
        }

        return hs.size();
        
    }
};