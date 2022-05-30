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
    bool hasCycle(ListNode *head) {
        //Using HashSet: Time:O(n) and Space:O(n)
        unordered_set<ListNode*> st;
        while(head != NULL)
        {
            if(st.find(head) != st.end())
                return true;
            else
                st.insert(head);
            head = head->next;
        }
        return false;
    }
};