class Trie {
public:
      unordered_map<char,Trie*>c;
      bool isend;
    Trie() {
    
    isend=false;
    }
    
    void insert(string word) {
     Trie* root=this;
        for(auto s:word){
             if(root->c.find(s)==root->c.end()){
                root->c[s]=new Trie();
             }
             root=root->c[s];
        }
        root->isend=true;
          
    }
    
    bool search(string word) {
       Trie *root=this;  
      for( auto s:word){
         if(root->c.find(s)==root->c.end()){
            return false;
         }
          root=root->c[s];
      }

        return root->isend;
    }
    
    bool startsWith(string prefix) {
        Trie*root=this;
        for(auto s:prefix){
            if(root->c.find(s)==root->c.end()){
            return false;
         }
          root=root->c[s];
      }

       return true;         
        
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */