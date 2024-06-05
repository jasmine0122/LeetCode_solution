/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* NEXT = head;
    struct ListNode* prev = NULL;
    
    while(head != NULL){
        NEXT = head->next;
        head->next = prev;
        prev = head;
        head = NEXT;
    }
    return prev;
}