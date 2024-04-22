/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

bool hasCycle(struct ListNode *head) {
    struct ListNode *fast = head;
    struct ListNode *slow = head;
    
    if(fast == NULL)
        return 0;
    
    while(fast->next != NULL && fast->next->next !=NULL){
        fast = fast->next->next;
        slow = slow->next;
        if(fast == slow)
            return 1;
    }
    return 0;
}