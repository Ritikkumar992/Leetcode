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
    int getDecimalValue(ListNode* head) {
        //Using a vector.
        vector<int> res;
        while(head != NULL)
        {
            res.push_back(head->val);
            head = head->next;
        }
        int ans = 0;
        int j  = 0;
        for(int i = res.size()-1;i>=0;i--){
            ans += res[i]*pow(2,j);
            j++;
        }
        return ans;
    }
};