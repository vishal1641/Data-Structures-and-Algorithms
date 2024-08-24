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
int len(ListNode* head)
    {
        int l=0;
        while(head!=NULL)
        {
            l++;
            head=head->next;
        }
        return l;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        int l=len(head);
        if(l<k)
        return head;
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* next=NULL;
        int count=0;
        while(curr!=NULL&&count<k)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            count++;
        }
        if(curr!=NULL)
        {
            head->next=reverseKGroup(curr,k);
        }
        return prev;
    }
};