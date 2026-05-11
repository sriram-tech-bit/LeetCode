class Solution {
public:
    int longestPalindrome(string s) {
        
        unordered_map<char,int>hm;
        for(int i=0;i<s.size();i++){
            hm[s[i]]++;

        }
        int count=0;
        int odcount=0;
        int oddfreq=0;
        for(auto k:hm){
            int fre=k.second;
           
            if((fre%2)==0){
               count+=fre;
            }
           else if(odcount<=1 && (fre%2)!=0){
              oddfreq=fre;
              odcount++;
           }
            

             
        }
        if( odcount==1 || odcount==0){
            count+=oddfreq;
        }
        else {
            count+=1;

        }
        
      

    return count;

    }
};