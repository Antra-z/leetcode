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
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next) 
            return head; // If the list is empty or has one node, return the list as is
        ListNode* odd=head; // Start from the first node, considered odd
        ListNode* even=head->next; // Start from the second node, considered even
        ListNode* evenHead=even; // Save the start of the even list
        while(even && even->next) 
        {
            odd->next=even->next; // Link odd nodes together
            odd=odd->next; // Move to the next odd node
            even->next=odd->next; // Link even nodes together
            even=even->next; // Move to the next even node
        }
        odd->next = evenHead; // Link the end of the odd list to the start of the even list
        return head; // Return the reordered list
    }
};