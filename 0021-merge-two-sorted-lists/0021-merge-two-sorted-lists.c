/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *assortlinkedlist(struct ListNode *l1) {
    struct ListNode *ptr = l1;
    struct ListNode *ptr2 = NULL;
    int temp;
    
    if (ptr == NULL) {
        return l1;
    }
    
    while (ptr != NULL) {
        ptr2 = ptr->next;
        while (ptr2 != NULL) {
            if (ptr->val > ptr2->val) {
                temp = ptr->val;
                ptr->val = ptr2->val;
                ptr2->val = temp;
            }
            ptr2 = ptr2->next;
        }
        ptr = ptr->next;
    }
    
    return l1;
}

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    if (list1 == NULL) {
        return assortlinkedlist(list2);
    } else if (list2 == NULL) {
        return assortlinkedlist(list1);
    }
    
    struct ListNode* ptr = list1;
    while (ptr->next != NULL) {
        ptr = ptr->next;
    }
    ptr->next = list2;
    
    return assortlinkedlist(list1);
}