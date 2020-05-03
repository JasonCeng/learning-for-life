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
        ListNode *fast = head;
        while(head) {
            if(fast->next && fast->next->next ) {
                fast = fast->next->next;    
            } else {
                return false;
            }
            if(head == fast) {
                return true;
            }
            head=head->next;
        }
        return false;
    }
};