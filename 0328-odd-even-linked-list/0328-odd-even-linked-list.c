/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* oddEvenList(struct ListNode* head) {
    if (head == NULL)
        return NULL;
    struct ListNode* odd = head;
    struct ListNode* prev_odd = NULL;
    struct ListNode* even = head->next;
    struct ListNode* first_even = even;

    while ((odd != NULL) && (even != NULL)) {
        odd->next = even->next;
        prev_odd = odd;
        odd = odd->next;
        if (odd != NULL)
            even->next = odd->next;
        even = even->next;
    }
    if (odd != NULL)
        prev_odd = odd;
    prev_odd->next = first_even;
    return head;
}