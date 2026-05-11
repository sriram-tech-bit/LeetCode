class Solution {
public:
    int longestPalindrome(string s) {
        
        unordered_map<char,int>hm;
        for(int i=0;i<s.size();i++){
            hm[s[i]]++;

        }
        int count=0;
        int odcount=0;
        for(auto k:hm){
            int fre=k.second;
           
            if((fre%2)==0){
               count+=fre;
            }
            else{
              odcount+=fre;   
            }

             
        }
        if( odcount>=1){
            count+=1;
        }
        else if(odcount==0){
            count+=odcount;
        }

    return count;

    }
};