/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* NEXT = head;
    struct ListNode* PREV = NULL;
    
    while(head != NULL){
        NEXT = head->next;
        head->next = PREV;
        PREV = head;
        head = NEXT;
    }
    return PREV;
}