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
    ListNode* deleteDuplicates(ListNode* head) {
       map<int, int> m;
       ListNode* curr = head;
       ListNode* prev = nullptr;

       while (curr != NULL) {
           if (m.find(curr->val) == m.end()) {
               m[curr->val]++;
               if (prev != nullptr)
                   prev->next = curr; 
               prev = curr;          
           }
           curr = curr->next; 
       }

       if (prev != nullptr)  
           prev->next = nullptr;

       return head;
    }
};
