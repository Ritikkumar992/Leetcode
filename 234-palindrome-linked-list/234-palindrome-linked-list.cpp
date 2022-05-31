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
    // function to reverse the linked list:
    ListNode* reverse(ListNode* ptr) {
    ListNode* pre=NULL;
    ListNode* nex=NULL;
    while(ptr!=NULL) {
        nex = ptr->next;
        ptr->next = pre;
        pre=ptr;
        ptr=nex;
    }
    return pre;
}
    
public:
    bool isPalindrome(ListNode* head) {
        //Without using Extra Space:
        //TIme;O(N/2)+O(N/2)+O(N/2) and Space: O(1)
        
        //Step 1: Getting the middle element of the list;
        ListNode* fast = head;
        ListNode* slow = head;
        
        while(fast->next != NULL && fast->next->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        //Traversing the list from the next element of the slow pointer.
        slow->next = reverse(slow->next);
        
        //Step3: iterate throught the list until the dummy doesn't reaches end, and 
        // create a dummy node to check if they are same element or not.
        slow = slow->next;
        ListNode* dummy = head;
        
        while(slow != NULL)
        {
            if(slow->val != dummy->val)
                return false;
            slow = slow->next;
            dummy = dummy->next;
        }
        return true;
    }
};