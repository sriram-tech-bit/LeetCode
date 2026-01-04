class Solution {
public:
    string removeDuplicates(string s, int k) {
      stack<pair<char,int>>st;
      for(int i=0;i<s.size();i++){
         if(st.size()>0 && st.top().first==s[i]){
              st.top().second++;
         
          if(st.top().second==k){
            st.pop();
          }
         }
          else{
            st.push({s[i],1});
          }

          }
          string res="";
       while(st.size()>0){
        pair<char,int>p=st.top();
         st.pop();
         for(int i=0;i<p.second;i++){
            res+=p.first;
         }
       }
       reverse(res.begin(),res.end());
       return res;
      
        
    }
};