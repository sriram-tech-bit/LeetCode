class Solution {
public:
    int longestPalindrome(string s) {
        
        unordered_map<char,int>hm;
        for(int i=0;i<s.size();i++){
            hm[s[i]]++;

        }
        int count=0;
        
        bool oddfreq=false;
        for(auto k:hm){
            int fre=k.second;
           
            if((fre%2)==0){
               count+=fre;
            }
           else {
            count+=fre-1;
            oddfreq=true; 
           }
            

             
        }
        if(oddfreq) count++;


        
        
            

        
        
      

    return count;

    }
};