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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        //ApproacH-03: Using Difference of length:
        //Time:O(2*max(length of list1, length of list2)) and Space:O(1)
        
        ListNode* d1 = headA;
        ListNode* d2 = headB;
        
        while(d1 != d2)
        {
            if(d1 == NULL)
                d1 = headB;
            else
                d1 = d1->next;
            if(d2 == NULL)
                d2 = headA;
            else
                d2 = d2->next;
        }
        return d1;
    }
};