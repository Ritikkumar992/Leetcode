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
        // Using Slow and Fast Pointer : Time:O(n) and Space:O(1)
        if(head == NULL||head->next == NULL) 
            return NULL;
        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* dummy = head;
        while(fast->next != NULL && fast->next->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
            if(slow == fast){
                while(dummy != slow){
                    slow = slow->next;
                    dummy = dummy->next;
                }
                return slow;
            }
        }
        return NULL;
    }
};