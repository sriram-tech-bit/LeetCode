class Solution {
public:
    string res="";
    string largestEven(string s) {
       for(int i=s.size()-1;i>=0;i--){
           if(s[i]=='2'){
               for(int j=0;j<=i;j++){
                  res+=s[j];

               }
               break;
           }
       }
         return res;

    }
};