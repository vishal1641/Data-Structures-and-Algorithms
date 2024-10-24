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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        int x=0;
        while(temp!=NULL){
            temp=temp->next;
            x++;
        }
        if(x<k)
        return head;
        ListNode*curr=head;
        ListNode*prev=NULL;
        int count=0;
        while(curr!=NULL&&count<k){
            ListNode*next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            count++;
        }
        if(curr!=NULL){
            head->next=reverseKGroup(curr,k);
        }
        return prev;
    }
};