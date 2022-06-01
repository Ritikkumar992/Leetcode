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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        //Using Extra Space: Time:O(n) and Space:O(n)
        vector<int> num1, num2;
        while(l1){
            num1.push_back(l1->val);
            l1 = l1->next;
        }
        while(l2){
            num2.push_back(l2->val);
            l2 = l2->next;
        }
        int m = num1.size(), n = num2.size();
        int sum = 0, carry = 0;
        
        ListNode* head = NULL, *p = NULL;
        for(int i = m-1, j = n-1;i>=0 || j>=0 || carry >0;i--,j--)
        {
            sum = carry;
            if(i>=0)
                sum += num1[i];
            if(j>=0)
                sum += num2[j];
            carry = sum/10;
            p = new ListNode(sum%10);
            p->next = head;
            head = p;
        }
        return head;
    }
};