/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
                vector<int>sol;
                vector<int>sol2;
            helper(p,sol);
            helper1(q,sol2); 
            
            for(int i=0;i<sol.size() && sol2.size();i++){
                if(sol[i]!=sol2[i]){
                    return false;
                     
                }
            }    
            return true;
       

    }
      void helper(TreeNode*p,vector<int>&sol){
           if(p==nullptr){
            sol.push_back(-1);
            return ;
           }
            sol.push_back(p->val);
           helper(p->left,sol);
           helper(p->right,sol);
      }
       void helper1(TreeNode*p,vector<int>&sol2){
           if(p==nullptr){
            sol2.push_back(-1);
            return ;
           }
            sol2.push_back(p->val);
           helper1(p->left,sol2);
           helper1(p->right,sol2);
      }

      



};