class Node{
public:
 Node*c[2] ;
   Node(){
    c[0]=nullptr;
    c[1]=nullptr;
   }
   

};




class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        int mxor=0;
    Node*root=new Node();
    for(int i=0;i<nums.size();i++){
        insert(root,nums[i]);
    }

     for(int i=0;i<nums.size();i++){
          mxor=max(query(root,nums[i]),mxor);
     }

         return mxor; 
    }
   void insert(Node* root,int n){
    for(int i=30;i>=0;i--){
      int b=(n>>i)&1;
      if(root->c[b]==nullptr){
           root->c[b]=new Node;
      }
       
       root=root->c[b];
      
       



    }
   return ;

   }
   int query(Node*root , int n){
      int ans=0;
       for(int i=30;i>=0;i--){
        int d=(n>>i)&1;
           if(root->c[1-d]!=nullptr){
             ans=ans|(1<<i);
            root=root->c[1-d];
          }
           else{
            
            root=root->c[d];
           }
       }

       return ans;
   }



};

