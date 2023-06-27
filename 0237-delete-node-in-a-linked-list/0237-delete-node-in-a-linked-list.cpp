/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
       ListNode* a=node->next;
       swap(a->val,node->val);
       node->next=a-> next;
       delete a; 
    }
};