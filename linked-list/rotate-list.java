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
       ArrayList<Integer>list=new ArrayList<>();
        ListNode temp=head;
        while(temp!=null){
            list.add(temp.val);
            temp=temp.next;
        }
        int n=list.size();
        if(n==0) return null;
        k=k%n;
        int i=n-k;
        temp=head;
        while(i<list.size()){
          temp.val=list.get(i);
          i++;
          temp=temp.next;
        }

        for(int j=0;j<n-k;j++){
            temp.val=list.get(j);
            temp=temp.next;


        }
        return head;
    }
}