#include "../linked_list_utils.h"

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (!head->next) return true;

        // Find middle of list
        ListNode *slow = head;
        ListNode *fast = head->next;
        while (fast->next && fast->next->next) {
            fast = fast->next->next;
            slow = slow->next;
        }
        if (fast->next) {
            // Odd number of nodes:
            // Delete middle node
            slow->next = slow->next->next;
        }
        printLinkedList(head);

        // Reverse second list
        ListNode *nxt= nullptr;
        ListNode *cur = slow->next;
        ListNode *prv = nullptr;

        while (cur) {
            nxt = cur->next;
            cur->next = prv;
            prv = cur;
            cur = nxt;
        }
        ListNode *head2 = prv;

        printLinkedList(head);
        printLinkedList(head2);
        bool result = true;
        while (head) {
            if (head->val != head2->val) return false;
            head = head->next;
            head2 = head2->next;
        }
        return false;
    }
};
