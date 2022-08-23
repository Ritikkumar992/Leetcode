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
    bool isPalindrome(ListNode* head) {
        //Approach_01:convert the linked list to string and check for palindorme:
        string s = "";
        while(head != NULL){
            s += head->val;
            head = head->next;
        }
        string s1 = "";
        for(int i = s.size()-1;i>=0;i--){
            s1 += s[i];
        }
        return s == s1;
    }
};