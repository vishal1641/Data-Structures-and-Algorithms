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
    ListNode* reverseList(ListNode* head) {
        
        // if(head->next==NULL||head==NULL)
        // return head;
     ListNode* prev=NULL;
        ListNode* fw=NULL;
       ListNode* current=head;
        while(current!=NULL){
            fw=current->next;
            current->next=prev;
            prev=current;
            current=fw;
        }
        return prev;
    }
};