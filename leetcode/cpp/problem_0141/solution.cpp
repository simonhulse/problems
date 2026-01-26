#include "../linked_list_utils.h"

class Solution {
public:
    int hasCycle(ListNode* head) {
        if (!head || !head->next) return false;
        ListNode *slow = head;
        ListNode *fast = head->next;
        while(fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            // slow and fast are pointing to the same place: cycle exists
            if (slow == fast) return true;
        }
        // fast pointer has reached end of list: no cycle
        return false;
    }
};
