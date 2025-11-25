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
         ListNode *S=head;
        ListNode *start=cycle(head);
        if(start==nullptr){
            return nullptr;
        }
         while(S!=start){
            S=S->next;
            start=start->next;
         }
        
         while(head!=start){
             head=head->next;
         }

                 return head;
    }


    ListNode *cycle(ListNode*head){
        ListNode * s=head;
        ListNode *f=head;
          while(f!=nullptr && f->next!=nullptr){
               s=s->next;
               f=f->next->next;
               if(s==f){
                return s;
               }
          }
          return nullptr;
    }
};