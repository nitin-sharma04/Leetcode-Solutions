/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* ptr = NULL;
    struct ListNode* ptr2 = NULL;

    while (head != NULL) {
        ptr = head;
        head = ptr->next;
        ptr->next = ptr2;
        ptr2 = ptr;
    }

    return ptr2;
}