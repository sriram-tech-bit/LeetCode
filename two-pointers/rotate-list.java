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
    public ListNode rotateRight(ListNode head, int k) {
     int count=1;
     if( head==null || head.next==null|| k==0){
        return head;
     }
     

     
     ListNode temp=head;
      while(temp.next!=null){
         
         temp=temp.next;
         count++;
      }
      
      k=k%count;
      if(k==0){
        return head;
      }
      count=count-k;
      ListNode prev=null;
      ListNode curr=head;


      while(count>0){
         prev=curr;
         
         curr=curr.next;
         
         count--;
      }
      prev.next=null;
      ListNode tail=curr;
      while(tail.next!=null){
         tail=tail.next;
      }
      tail.next=head;
      return curr;

    }
}