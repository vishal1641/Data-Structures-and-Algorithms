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
        ListNode* reverseList (ListNode* head){
            ListNode* pre=NULL;
            ListNode* next=NULL;
            while(head!=NULL){
                next=head->next;
                head->next=pre;
                pre=head;
                head=next;
            }
            return pre;
        }
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next == NULL){
            return true;
        }
        ListNode* a=head;  ListNode* b=head;
        while(b->next!=NULL&&b->next->next!=NULL){
            a=a->next;
            b=b->next->next;
        }
        a->next=reverseList(a->next);
        a=a->next;
        while(a!=NULL){
            if(head->val!=a->val)
            return false;
            head=head->next;
            a=a->next;
        }
        return true;
    }
};