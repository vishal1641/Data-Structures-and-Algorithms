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
    ListNode* swapNodes(ListNode* head, int k) {
       ListNode* temp=head;
       ListNode* a=head;
       ListNode* b=head;
       int count=0;
       while(temp!=NULL){
           temp=temp->next;
           count++;
       } 
int x=k-1;
       while(x--){

           a=a->next;
          
       }
        count=count-k;
       while(count--){
           b=b->next;
       }
       swap(a->val,b->val);
       return head;
    }
};