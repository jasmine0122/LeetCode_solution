/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* oddEvenList(struct ListNode* head) {
    if(head == NULL || head->next == NULL)
        return head;

    struct ListNode* Odd = head;
    struct ListNode* Even = head->next;
    struct ListNode* Mid = Even;

    while(Even != NULL && Even->next != NULL){
            Odd->next = Even->next;
            Odd = Odd->next;

            Even->next = Odd->next;
            Even = Even->next;
    }
    Odd->next = Mid;

    return head;
}