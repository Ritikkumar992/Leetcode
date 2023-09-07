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
class Solution{
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head == NULL || head->next == NULL)
            return head;
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        
        ListNode* it = dummy;
        ListNode* prev = NULL;
        // traverse till we find left;
        for(int i= 0;i<left;i++){
            prev = it;
            it = it->next;
        }
        // reverse algorithm:
        ListNode* itR = it;
        ListNode* prevR = prev;
        for(int i = left;i<=right;i++){
            ListNode* cur = itR->next;
            itR->next = prevR;
            prevR = itR;
            itR = cur;
        }
        // connection:
        prev->next = prevR;
        it->next = itR;
        
        return dummy->next;
    }
};