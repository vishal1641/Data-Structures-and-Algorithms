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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // If either list is empty, return the other list
        if (list1 == nullptr) return list2;
        if (list2 == nullptr) return list1;

        // Dummy node to start the merged list
        ListNode* temp = new ListNode(-1);
        ListNode* tail = temp;

        // Traverse both lists and merge them
        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val <= list2->val) {
                tail->next = list1;
                list1 = list1->next;
            } else {
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next;
        }

        // Attach the remaining nodes of list1 or list2, if any
        if (list1 != nullptr) {
            tail->next = list1;
        } else {
            tail->next = list2;
        }

        

        return temp->next;
    }
};
