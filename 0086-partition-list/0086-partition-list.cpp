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
    ListNode* partition(ListNode* head, int x) {
        // create two dummy list for storing small and large value:
        ListNode* small = new ListNode(-1);
        ListNode* large = new ListNode(-1);
        
        // create two pointer to traverse in small and large linked list:
        ListNode* smallHead = small;
        ListNode* largeHead = large;
        
        // implement the main logic:
        while(head)
        {
            if(head->val < x){
                smallHead->next = head;
                smallHead = smallHead->next;
            }
            else{
                largeHead->next = head;
                largeHead = largeHead->next;
            }
            head = head->next;
        }
        // join small and large linked list:
        largeHead->next = NULL;
        smallHead->next = large->next;
        
        return small->next;
    }
};