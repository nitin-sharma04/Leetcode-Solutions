/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverse(struct ListNode* start, struct ListNode* last) {
    struct ListNode* ptr = NULL;
    struct ListNode* ptr2 = last;

    while (start != last) {
        struct ListNode* next = start->next;
        start->next = ptr2;
        ptr2 = start;
        start = next;
    }

    return ptr2;
}

struct ListNode* reverseBetween(struct ListNode* head, int left, int right) {
    if (head == NULL || head->next == NULL || left == right)
        return head;
    struct ListNode dummy;
    dummy.next = head;
    struct ListNode* prev = &dummy;
    struct ListNode* end = head;

    for (int i = 1; i < left; ++i) {
        prev = prev->next;
    }

    for (int i = 1; i < right; ++i) {
        end = end->next;
    }

    prev->next = reverse(prev->next, end->next);

    return dummy.next;
}