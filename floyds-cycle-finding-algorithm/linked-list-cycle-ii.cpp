/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
       unordered_set<ListNode*>hm;
        ListNode * curr=head;
        int i=0;
        while(curr!=nullptr){
          if(hm.find(curr)!=hm.end()){
              return curr;
           }
           hm.insert(curr);
           curr=curr->next;
        }
         return nullptr;
    }
};