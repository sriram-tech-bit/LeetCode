/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
    ListNode *m=middleNode(head);
     ListNode *rh=m->next;
      m->next=nullptr;
      ListNode * re=reverseList(rh);
        while(head!=nullptr && re!=nullptr){
         if(head->val==re->val){
              head=head->next;
              re=re->next;
         }
         else{
            return false;
         }

        }

           return true;
        
    }
    ListNode* middleNode(ListNode* head) {
      ListNode * s=head;
      ListNode *f=head;
      while(f!=nullptr){
          if(f->next==nullptr || f->next->next==nullptr ){
               return s;
          }
         
          s=s->next;
          f=f->next->next;
      }

      return f;
    }
      ListNode* reverseList(ListNode* head) {
          ListNode *rh=nullptr;
          
          while(head!=nullptr){
            ListNode *t=head;
              head=head->next;
               t->next=rh;
               rh=t;
              
                
          }
          return rh;
    }



};