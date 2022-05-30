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
    ListNode* reverseList(ListNode* head) {
        //Approach_01: Iterative Approach --> Time:O(n) and Space:O(1)
        
        //Step 1:
        ListNode* prev_p = NULL;
        ListNode* curr_p = head;
        ListNode* next_p;
        
        //Step 2:
        while(curr_p != NULL)
        {
            next_p = curr_p -> next;
            curr_p -> next = prev_p;
            
            prev_p = curr_p;
            curr_p = next_p;
        }
        head = prev_p;
        return head;
    }
};