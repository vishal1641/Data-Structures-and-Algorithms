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
    ListNode* swapPairs(ListNode* head) {
     if(head==NULL||head->next==NULL){
         return head;

     }
     ListNode* temp=new ListNode(-1);
ListNode* current=head;
ListNode* prev=temp;
while(current!=NULL&&current->next!=NULL){
    prev->next=current->next;
    current->next=prev->next->next;
    prev->next->next=current;
    prev=current;
    current=current->next;
}
     return temp->next;
    }
};