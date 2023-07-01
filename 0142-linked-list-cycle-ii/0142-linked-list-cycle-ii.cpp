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
        ListNode* a =head,*b=head;
        while(b!=NULL && b->next!=NULL ){
            a=a->next;
            b=b->next->next;
            if(a==b)
           break;
        }
        if(a==NULL ||b==NULL|| b->next==NULL)
        return NULL;
        ListNode* m=head;
        ListNode* n=b;
        while(m!=n){
            m=m->next;
            n=n->next;
        } return m;
    }
};