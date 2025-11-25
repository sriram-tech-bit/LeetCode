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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int l1=0;
        int l2=0;
        ListNode * temp1=headA;
        ListNode *temp2=headB;
        while(temp1!=nullptr){
              l1++;
              temp1=temp1->next;
        }
        while(temp2!=nullptr){
              l2++;
              temp2=temp2->next;
        }
         if(l1>l2){
            for(int i=l2;i<l1;i++){
                headA=headA->next;
            }

         }
         else{
            for(int i=l1;i<l2;i++){
                headB=headB->next;
            }
         }
         while(headA!=nullptr && headB!=nullptr){
            if(headA==headB){
                return headA;
             }
             headA=headA->next;
             headB=headB->next;
             
         }

        return nullptr;
    }
};