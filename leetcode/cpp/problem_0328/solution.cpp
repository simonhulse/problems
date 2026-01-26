#include "../linked_list_utils.h"

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        ListNode *odd = head;
        ListNode *even = odd->next;
        ListNode *evenHead = even;
        while (odd->next && odd->next->next) {
            odd->next = odd->next->next;
            odd = odd->next;
            even->next = (even->next->next) ? even->next->next : nullptr;
            even = even->next;
        }
        odd->next = evenHead;
        return head;
    }
};
