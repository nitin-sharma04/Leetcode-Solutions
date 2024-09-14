/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* removeElements(struct ListNode* head, int val) {
    
    while (head != NULL && head->val == val) {
        head = head->next;
    }

    
    struct ListNode* ptr = head;
    while (ptr != NULL && ptr->next != NULL) {
        if (ptr->next->val == val) {
            ptr->next = ptr->next->next;
        }
        else {
            ptr = ptr->next;
        }
    }

    return head;
}