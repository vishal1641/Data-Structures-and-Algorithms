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
    ListNode* sortList(ListNode* head) {
        ListNode *temp=new ListNode(-1);
        ListNode*b=temp;
        ListNode *a=head;
        vector<int>v;

        while(a!=NULL){
v.push_back(a->val);
a=a->next;
        }
        sort(begin(v),end(v));
        for(int i=0;i<v.size();i++){
            ListNode*curr=new ListNode(v[i]);
            b->next=curr;
            b=curr;
        }
        b->next=NULL;
        return temp->next;
    }
};