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
    dummy->next=temp;
    dummy=dummy->next;
}
else{
    dummy1->next=temp;
    dummy1=dummy1->next;
}
temp=temp->next;
    }
        dummy->next=b->next;
dummy1->next=NULL;
        return a->next;
    }
};