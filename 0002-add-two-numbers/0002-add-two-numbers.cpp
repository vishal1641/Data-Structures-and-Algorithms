class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum = 0;
        int carry = 0;
        ListNode* temp = new ListNode(-1);
        ListNode* z = temp;

        while (l1 != NULL && l2 != NULL) {
            int x = l1->val;
            int y = l2->val;
            sum = (x + y + carry) % 10;
            carry = (x + y + carry) / 10;

            z->next = new ListNode(sum); 
            z = z->next;
            l1 = l1->next;
            l2 = l2->next;
        }

        while (l1 != NULL) {
            int x = l1->val;
            sum = (x + carry) % 10;
            carry = (x + carry) / 10;

            z->next = new ListNode(sum); 
            z = z->next;
            l1 = l1->next;
        }

        while (l2 != NULL) {
            int x = l2->val;
            sum = (x + carry) % 10;
            carry = (x + carry) / 10;

            z->next = new ListNode(sum); 
            z = z->next;
            l2 = l2->next;
        }

        if (carry != 0) {
            z->next = new ListNode(carry); 
        }

        return temp->next; 
    }
};
