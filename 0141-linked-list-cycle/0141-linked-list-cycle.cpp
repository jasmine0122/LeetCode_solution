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
        ListNode *slow = head;
        
        if(fast == NULL || fast->next == NULL )
            return false;
        
        while(fast->next != NULL and fast->next->next != NULL){
            if(fast->next->next == slow->next)
                return true;
            else{
                fast = fast->next->next;
                slow = slow->next;
            }
        }
        return false;
    }
};