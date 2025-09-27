class Solution {
public:
    bool isValid(string s) {
        int n=s.size();
      stack<char>st;
      for(int i=0;i<n;i++){
        if(s[i]=='['|| s[i]=='(' ||s[i]=='{'){
            st.push(s[i]);
        }
        else{
          if(st.size()==0){
            return 0;
          }
          if((s[i]==']' && st.top()!='[')||
          (s[i]==')' && st.top()!='(') || (s[i]=='}' &&st.top()!='{')){
       return 0;

          }
          else{
            st.pop();
          }
          
        }
            
      }

         if(st.size()==0){
            return 1;
         }
         return 0;
    }
};