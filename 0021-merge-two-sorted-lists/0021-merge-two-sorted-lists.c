/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode* TMP = list2;
    
    if(list2 == NULL)
        return list1;
    else if(list1 == NULL)
        return list2;
    
    if(list1->val < list2->val){
        TMP = list1;
        list1 = list1->next;
    }
    else
        list2 = list2->next;
    
    struct ListNode* ANS = TMP;
    while(list1 != NULL && list2 != NULL){
        // printf("%d %d\n", list1->val, list2->val);
        if(list1->val < list2->val){
            ANS->next = list1;
            list1 = list1->next;
            ANS = ANS->next;
        }
        else{
            ANS->next = list2;
            list2 = list2->next;
            ANS = ANS->next;
        }  
    }
    while(list1 != NULL){
        ANS->next = list1;
        list1 = list1->next;
        ANS = ANS->next;     
    }
    while(list2 != NULL){
        ANS->next = list2;
        list2 = list2->next;
        ANS = ANS->next;           
    }
    
    return TMP;
}