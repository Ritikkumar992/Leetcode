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
    public ListNode reverseBetween(ListNode head, int left, int right) {
        if(head == null || head.next == null)
            return head;
        ListNode dummy = new ListNode(-1);
        dummy.next = head;
        
        ListNode it = dummy;
        ListNode prev = null;
        // traverse till we find left;
        for(int i= 0;i<left;i++){
            prev = it;
            it = it.next;
        }
        // reverse algorithm:
        ListNode itR = it;
        ListNode prevR = prev;
        for(int i = left;i<=right;i++){
            ListNode cur = itR.next;
            itR.next = prevR;
            prevR = itR;
            itR = cur;
        }
        // connection:
        prev.next = prevR;
        it.next = itR;
        
        return dummy.next;
    }
}