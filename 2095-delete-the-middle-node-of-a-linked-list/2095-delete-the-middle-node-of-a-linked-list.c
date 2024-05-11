/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteMiddle(struct ListNode* head) {
    struct ListNode* CUR = head;
    int c = 0;
    
    if(head->next == NULL)
        return NULL;
    
    while(CUR != NULL){
        CUR = CUR->next;
        c++;
    }
    
    if(c%2 == 0)
        c = c/2;
    else
        c = (c-1)/2;
    
    CUR = head;
    int i = 0;
    while(CUR != NULL && CUR->next != NULL){
        // printf("%d\n", i);
        if(i == c-1){
            CUR->next = CUR->next->next;
            break;
        }
        CUR = CUR->next;
        // printf("hiiiiiiiiiiii\n");
        i++;
    }
    return head;
}