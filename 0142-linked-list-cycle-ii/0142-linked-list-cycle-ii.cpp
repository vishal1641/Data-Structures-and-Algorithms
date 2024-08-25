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
    ListNode *detectCycle(ListNode *head) {
        ListNode* fast=head;
        ListNode*slow=head;
        while(fast!=NULL&&fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow)
           break;
        }
        if(fast==NULL||fast->next==NULL||slow==NULL)
        return NULL;
ListNode *a=head;
ListNode* b=fast;
while(a!=b){
    a=a->next;
    b=b->next;
}
return a;
    }
};