#include "../linked_list_utils.h"

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *dummy = new ListNode(0, head);
        ListNode *back = dummy;
        ListNode *curr = head;
        ListNode *prev = nullptr;
        ListNode *next = nullptr;
        bool finish = false;

        while (true) {
            // Check there are at least n nodes left
            ListNode *scout = curr;
            for (int i = 0; i < k; i++) {
                if (!scout) {
                    finish = true;
                    break;
                } else {
                    scout = scout->next;
                }
            }
            if (finish) break;

            for (int i = 0; i < k; i++) {
                next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
            }
            ListNode *newBack = back->next;
            back->next = prev;
            back = newBack;
            back->next = curr;
            printLinkedList(back);
            printLinkedList(curr);
            std::cout << std::endl;
        }
        back->next = curr;
        return dummy->next;
    }
};
