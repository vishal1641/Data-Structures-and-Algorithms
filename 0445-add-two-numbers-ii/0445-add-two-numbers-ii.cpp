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
    ListNode* reverse(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;
        while (curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    ListNode* solve(ListNode* l1, ListNode* l2) {
     
        ListNode* dummy = new ListNode(-1);
        ListNode* kutta = dummy;
        int carry = 0;

        while (l1 != NULL || l2 != NULL || carry > 0) {

            int val1 = l1 != NULL ? l1->val : 0;
            int val2 = l2 != NULL ? l2->val : 0;

            int sum = (val1 + val2 + carry)  ;
            carry = (sum) / 10;
            kutta->next = new ListNode(sum%10);
            kutta = kutta->next;
            if (l1 != NULL)
                l1 = l1->next;
            if (l2 != NULL)
                l2 = l2->next;
        }

        return dummy->next;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = reverse(l1);
        l2 = reverse(l2);
        ListNode* ans = solve(l1, l2);
        ans = reverse(ans);
        return ans;
    }
};