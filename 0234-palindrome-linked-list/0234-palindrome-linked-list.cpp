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
    ListNode* reverse(ListNode* node)
    {
        ListNode* prev = NULL;
        ListNode* curr = node;
        ListNode* front;
        
        while(curr != NULL)
        {
            front = curr->next;
            curr->next = prev;
            
            prev = curr;
            curr = front;
        }
        node = prev;
        return node;
    }
public:
    bool isPalindrome(ListNode* head) {
        // optmized approach:
        ListNode* slow = head, *fast = head;
        
        // step_01: finding middle node.
        while(fast -> next != NULL && fast->next->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        // step_02: Reversing the node from the next node of the slow pointer.
        slow->next = reverse(slow->next);
        slow = slow->next;
        
        // step_03: check for palindrome .
        ListNode* dummy = head;
        while(slow != NULL) {
            if(dummy->val != slow->val) 
                return false;
            dummy = dummy->next;
            slow = slow->next;
        }
        return true;
    }
};