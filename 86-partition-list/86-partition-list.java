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
    public ListNode partition(ListNode head, int x) {
        // Approach_01: Using two pointer:
        // step_01: Creating two dummy LIstNode for storing our smaller and higher value:
        ListNode small = new ListNode(-1);
        ListNode high = new ListNode(-1);
        
        //step_02: creating two pointer to traverse in small and high listNode:
        ListNode smallHead = small;
        ListNode highHead = high;
        
        //step_03: Traverse throught the head and implement the main logic:
        while(head != null)
        {
            if(head. val < x){
                smallHead.next = head;
                smallHead = smallHead.next;
            }else{
                highHead.next = head;
                highHead = highHead.next;
            }
            head = head.next;
        }
        // step_03: Build connection between small and high LIstNOde:
        highHead.next = null;
        smallHead.next = high.next;
        
        return small.next;
    }
}