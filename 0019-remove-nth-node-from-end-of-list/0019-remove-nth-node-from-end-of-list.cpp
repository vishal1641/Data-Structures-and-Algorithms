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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp;
        temp=head;
        int k=0;

      while(temp!=NULL){
          k++;
         temp=temp->next;
      }  
      temp=head;
      if(k-n<0)
      return temp;
      if(k-n==0){
        temp=head;
        head=head->next;
        delete temp;
        return head;
      }
int w=0;
      while(w<=k-n-1){
if(w==k-n-1){
    temp->next=temp->next->next;
}
temp=temp->next;
w++;
      }
      return head;
    }
};