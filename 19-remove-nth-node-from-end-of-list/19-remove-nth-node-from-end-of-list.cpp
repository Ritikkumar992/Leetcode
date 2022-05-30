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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //Approach_O1: Time:O(n) and Space:O(1)
        ListNode* temp = head;
        int len = 0, i = 1;
        while(temp != NULL) //finding the length of the linked list;
        {
            temp = temp->next;
            len++;
        }
        if(len == n) // if head iteself is to be deleted.
            return head->next;
        for(temp = head; i < len - n; i++) temp = temp -> next; // iterate first len-n nodes
	    temp -> next = temp -> next -> next;      // remove the nth node from the end
	    return head;
    }
};