/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *ptr1=headA;
    struct ListNode *ptr2=headB;

    if(headA==NULL||headB==NULL){
        return NULL;
    }

    while(ptr1!=ptr2){
        ptr1=(ptr1==NULL)?headB:ptr1->next;
        ptr2=(ptr2==NULL)?headA:ptr2->next;
    }
    return ptr1;
    
}