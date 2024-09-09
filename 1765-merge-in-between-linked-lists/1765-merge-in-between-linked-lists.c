/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* mergeInBetween(struct ListNode* list1, int a, int b,
                                struct ListNode* list2) {
    struct ListNode* ptr = list1;
    struct ListNode* first_break = list1;
    struct ListNode* second_break = list1;
    int count = 0;

    while (ptr != NULL && ptr->next != NULL) {
        if (count == a - 1)
            first_break = ptr;
        if (count == b)
            second_break = ptr;

        ptr = ptr->next;
        count++;
    }
    ptr = list2;
    while (ptr != NULL && ptr->next != NULL) {
        ptr = ptr->next;
    }

    first_break->next = list2;
    ptr->next = second_break->next;
    return list1;
}