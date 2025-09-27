class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        string res="";
        for(int i=0;i<s.size();i++){
             if(st.size()>0 && st.top()==s[i]){
                st.pop();
                continue;
             }
             st.push(s[i]);
        }

    
    while(st.size()>0){
        res+=st.top();
        st.pop();
    }
    reverse(res.begin(),res.end());
    return res;
    }

};