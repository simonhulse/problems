#include "../linked_list_utils.h"

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return nullptr;
        }
        ListNode *dummy = new ListNode(0);
        dummy->next = head;

        ListNode *slow = dummy, *fast = dummy;
        while (fast && fast->next) {
            fast = fast->next->next;
            slow = slow->next;
        }
        slow->next = slow->next->next;
        return head;
    }
};
