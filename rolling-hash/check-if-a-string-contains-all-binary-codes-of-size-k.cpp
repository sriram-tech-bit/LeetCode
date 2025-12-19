class Solution {
public:
   

    bool hasAllCodes(string s, int k) {
        unordered_set<string>vec;
        unordered_set<string>vec1;
        int total=1<<k;
        for(int i=0;i<total;i++){
        string res="";
          for(int j=k-1;j>=0;j--){
              res+=to_string(((i>>j)&1));
          }
          vec.insert(res);

        }
        
        
        for(int i=0;i<s.size();i++){
           string sub=s.substr(i,k);
             vec1.insert(sub);
         }
         for(auto s:vec){
            cout<<s<<" ";
           if(vec1.find(s)==vec1.end()){
              return false;
           }
         }
       return true;
    }


};