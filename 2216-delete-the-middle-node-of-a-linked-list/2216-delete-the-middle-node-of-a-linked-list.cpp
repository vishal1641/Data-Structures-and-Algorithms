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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* temp=head;
        int k=0;
        while (temp!=NULL){
            k++;
            temp=temp->next;
        }
        temp=head;
        int x=k/2;
        int p=0;
        if(k==1)
        return NULL;
        while(p<=x-1)
        {
            if(p==x-1)
            temp->next=temp->next->next;
            
        
        temp=temp->next;
        p++;}
        return head;
    }
};