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
        //Using HashSet: Time:O(n+m) and Space:O(n)
        unordered_set<ListNode*> st;
        while(headB != NULL){
            st.insert(headB);
            headB = headB->next;
        }
        while(headA != NULL)
        {
            if(st.find(headA) != st.end())
                return headA;
            headA = headA->next;
        }
        return NULL;
    }
};