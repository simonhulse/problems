#include "../linked_list_utils.h"

class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode *dummy = new ListNode(0, head);
        ListNode *back = dummy;
        for (int i = 0; i < left - 1; i++) {
            back = back->next;
        }

        ListNode *curr = back->next;
        ListNode *prev = nullptr;
        ListNode *next = nullptr;

        for (int i = 0; i < right - left + 1; i++) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        back->next->next = curr;
        back->next = prev;
        printLinkedList(dummy->next);

        return dummy->next;
    }
};
