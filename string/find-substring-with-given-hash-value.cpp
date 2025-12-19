class Solution {
public:
    int  hv(char c){
        return c-'a'+1;
     }

    string subStrHash(string s, int power, int modulo, int k, int hashValue) {
    
       string res="";
      
      for(int i=0;i<s.size();i++){
        string subs=s.substr(i,k);
        int hashval=0;
        int p=1;
          for(int j=0;j<subs.size();j++){
            
            hashval=(hashval+hv(subs[j])*p)%modulo;
            p=p*power;
            
          }
          
        if(hashval==hashValue){
            return subs;  
        }
     }
    return res;
    }
};