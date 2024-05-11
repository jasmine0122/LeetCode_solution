/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    if(l1 == NULL)
        return l2;
    else if(l2 == NULL)
        return l1;
    
    struct ListNode* result = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* SUM = result;
    result->next = NULL;
    result->val = 0;
    int c = 0, sum = 0;
    
    while(l1 != NULL || l2 != NULL || c != 0){
        sum = 0;
        if(l1 != NULL){
            sum += l1->val;
            l1 = l1->next;
        }
        if(l2 != NULL){
            sum += l2->val;
            l2 = l2->next;
        }
        sum += c;
    
        if(sum < 10){
            SUM->val = sum;
            c = 0;
        }
        else{
            SUM->val = sum%10;
            c = sum/10;
        }
        if(l1 != NULL || l2 != NULL || c != 0){
            SUM->next = (struct ListNode*)malloc(sizeof(struct ListNode));
            SUM->next->next = NULL;
            SUM = SUM->next;            
        }
    }
    return result;
}