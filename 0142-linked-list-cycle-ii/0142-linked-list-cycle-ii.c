/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *detectCycle(struct ListNode *head) {
    if(head==NULL||head->next==NULL)
            return NULL;
     struct ListNode *fast=head;
    struct ListNode *slow=head;

    while(fast!=NULL&&fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        
        if(fast==slow){
            
            struct ListNode *entry=head;
            
            while(entry!=slow){
                slow=slow->next;
                entry=entry->next;
            }
            return entry;
        }
            
        
        
    }
    return NULL;
    
}