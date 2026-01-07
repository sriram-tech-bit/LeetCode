class Solution {
public:
    string reversePrefix(string s, int k) {
        string res="";
        for(int i=0;i<k;i++){
             res+=s[i];
        }
         reverse(res.begin(),res.end());
         for(int i= k;i<s.size();i++){
             res+=s[i];
         }
         return res;
        
    }
};