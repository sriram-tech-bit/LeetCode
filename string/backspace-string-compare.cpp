class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st;
        stack<int>st2;
        for(int i=0;i<s.size();i++){
          if(!st.empty() &&s[i]=='#'){
            st.pop();
          }
          else{
            st.push(s[i]);
          }

        }
        for(int i=0;i<t.size();i++){
          if(!st2.empty() &&t[i]=='#'){
            st2.pop();
          }
          else{
            st2.push(t[i]);
          }

        }
        s="";
      while(!st.empty()){
        s+=st.top();
        st.pop();

      }
      t="";
while(!st2.empty()){
        t+=st2.top();
        st2.pop();

      }
  cout<<s;
  cout<<t;
  return s==t;


    }
};