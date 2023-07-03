/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* dummy=new ListNode();
        ListNode* dummy1=new ListNode();
        ListNode* a=dummy;
        ListNode* b=dummy1;
        ListNode* temp=head;
        
        while(temp!=NULL)
        {
if(temp->val<x)
{
    a->next=temp;
    a=a->next;
}
else{
    b->next=temp;
    b=b->next;
}
temp=temp->next;
    }
        a->next=dummy1->next;
b->next=NULL;
        return dummy->next;
    }
};