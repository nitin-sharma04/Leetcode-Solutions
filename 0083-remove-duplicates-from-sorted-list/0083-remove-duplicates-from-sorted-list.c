/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    if (head == NULL || head->next == NULL)
        return head;
    struct ListNode* ptr1 = head;
    struct ListNode* ptr2 = head->next;

    while (ptr2 != NULL) {
        if (ptr1->val == ptr2->val) {
            ptr1->next = ptr2->next;
            ptr2 = ptr1->next;
        } else {
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
    }
    return head;
}