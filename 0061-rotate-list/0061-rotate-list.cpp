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
    ListNode* rotateRight(ListNode* head, int k) {
       if(head==NULL || head->next==NULL )
       return head;
       int length=1;
       ListNode* v=head;
       while(v->next!=NULL)
       {
           length++;
           v=v->next;
       }
       k=k%length;
       int w=length-k;
       v->next=head;
      
       while(w--){
          v=v->next;
       }
       head=v->next;
       v->next=NULL;
       return head;
    }
};