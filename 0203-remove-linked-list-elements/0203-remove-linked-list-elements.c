/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode* curr = head;
    struct ListNode* prev = NULL;
    
    if(head == NULL)
        return head;
    
    while(curr != NULL){
        if(curr->val == val && curr == head){
            head = curr->next;
            curr = head;
        }
        else if(curr->val == val){
            prev->next = curr->next;
            curr = curr->next;
        }
        else{
            prev = curr;
            curr = curr->next;
        }
    }
    return head;
}