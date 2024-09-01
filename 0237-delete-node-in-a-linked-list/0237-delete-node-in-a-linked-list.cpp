/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {

        struct ListNode* ptr = node;
        struct ListNode* prev = ptr;

        while (ptr->next != NULL) {
            ptr->val = ptr->next->val;
            prev = ptr;
            ptr = ptr->next;
        }
        prev->next = NULL;
    }
};