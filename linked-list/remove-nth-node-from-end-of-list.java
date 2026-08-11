/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        if(head==null ){
            return head;
        }
        
           
        
        int count=1;
      ListNode temp=head;
        while(temp.next!=null){
            temp=temp.next;
            count++;
        }
      count=count-n;
      if(count==0 ){
        return head.next;
      }
     
      ListNode prev=null;
      ListNode curr=head;
      while(count>0){
        prev=curr;
        curr=curr.next;
        count--;
      }
      prev.next=curr.next;

         return head;
    }
}