/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *detectCycle(struct ListNode *head) {
    struct ListNode *slow = head;
    struct ListNode *fast = head;
    struct ListNode *entry = head;
    
    if(head == NULL || head->next == NULL || head->next->next == NULL )
        return NULL;
    
    while(fast->next != NULL && fast->next->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast && slow != NULL){
            while(slow != entry){
                entry = entry->next;
                slow  = slow->next;
            }
            return entry;
        }
    }
    return NULL;
}