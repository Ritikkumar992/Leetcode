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
    ListNode* middleNode(ListNode* head) {
        //Naive Approach: 
        //Step1 : Traverse throught the whole linked list to count the lenght of the linked list:
        int n = 0;
        ListNode* temp = head;
        while(temp != NULL)
        {
            n++;
            temp = temp->next;
        }
        //step2: Traverse for the 2nd time for n/2 to get the middle of linked list;
        temp = head;
        for(int i = 0;i<n/2;i++){
            temp = temp->next;
        }
        return temp;
    }
};