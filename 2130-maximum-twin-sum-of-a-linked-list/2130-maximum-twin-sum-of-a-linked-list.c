/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middle_node(struct ListNode* head){
    struct ListNode* slow = head;
    struct ListNode* fast = head->next->next;
    
    while(slow != NULL && fast != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

struct ListNode* Reverse(struct ListNode* head){
    struct ListNode *cur = head, *prev = NULL;
    
    while(cur != NULL){
        struct ListNode* next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;  
    }
    return prev;
}

int pairSum(struct ListNode* head) {
    struct ListNode* mid = (struct ListNode*)malloc(sizeof(struct ListNode*));
    struct ListNode* reverse = (struct ListNode*)malloc(sizeof(struct ListNode*));   
    mid = middle_node(head);
    reverse = Reverse(mid->next);
    
    int Max = INT_MIN;
    while(head != NULL && reverse != NULL){
        Max = fmax(Max, head->val + reverse->val);
        // printf("%d %d\n", head->val, reverse->val);
        head = head->next;
        reverse = reverse->next;
    }
    return Max;
}