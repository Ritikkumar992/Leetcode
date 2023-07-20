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
        //Approach_01: Single Traversal : Time:O(n) and Space:O(1)
        int len = 0, i=1;
        ListNode* temp = head;
        while(temp != NULL)
        {
            temp = temp->next;
            len++;
        }
        if(len == n)
            return head->next;
        for(temp = head; i<len-n;i++){
            temp = temp->next;
        }
        temp->next = temp->next->next;
        return head;
    }
};