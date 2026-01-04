class Solution {
public:
    string removeDuplicateLetters(string s) {
       unordered_set<char>hs;
       unordered_map<char,int>hm;
       stack<char>st;
        for(int i=0;i<s.size();i++) {
            hm[s[i]]++;
        }
          for(int i=0;i<s.size();i++){
             if(hs.find(s[i])!=hs.end()){
               continue;
             }
             else{
                 while(st.size()>0 && st.top()>s[i]&&hm[st.top()]>0){
              hs.erase(st.top());
             st.pop();



                 }

             }
       st.push(s[i]);
       hs.insert(s[i]);
       hm[s[i]]--;



          }
       string res="" ;
        while(st.size()>0){
             res+=st.top();
             st.pop();
        }  
      reverse(res.begin(),res.end());
      return res;
        
    }
};