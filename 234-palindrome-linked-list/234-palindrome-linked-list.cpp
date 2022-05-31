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
        //Approach_01: Using Extra Space: Time:O(n) and Space:O(n)
        vector<int> res;
        while(head != NULL){
            res.push_back(head->val);
            head = head->next;
        }
        int n = res.size();
        for(int i = 0;i<n/2;i++)
        {
            if(res[i] != res[n-i-1])
                return false;
        }
        return true;
    }
};