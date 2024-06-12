/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void split(struct ListNode* top, struct ListNode** a, struct ListNode** b){
    struct ListNode* fast = top->next;
    struct ListNode* slow = top;
    
    while(fast->next != NULL && fast->next->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    *a = top;
    *b = slow->next;
    slow->next = NULL; //不加的話會stack overflow
}

struct ListNode* sortedMerge(struct ListNode* a, struct ListNode* b){
    struct ListNode* result = NULL;
    
    if(a == NULL)
        return b;
    if(b == NULL)
        return a;
    
    if(a->val <= b->val){
        result = a;
        result->next = sortedMerge(a->next, b);
    }
    else{
        result = b;
        result->next = sortedMerge(a, b->next);        
    }
    return result;
}

void mergeSort(struct ListNode** top){
    struct ListNode* left = NULL;
    struct ListNode* right = NULL;
    struct ListNode* curr = *top;
    
    if(curr == NULL || curr->next == NULL)
        return;
    
    split(curr, &left, &right);
    
    mergeSort(&left);
    mergeSort(&right);
    
    *top = sortedMerge(left, right);
}

struct ListNode* sortList(struct ListNode* head) {
    mergeSort(&head);
    return head;
}