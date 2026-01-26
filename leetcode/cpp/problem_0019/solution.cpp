#include "../linked_list_utils.h"

// N.B. it practice it would be a good idea to clear up the memory
// assigned to the dummy and deleted node to prevent leaks
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *dummy = new ListNode(0, head);
        ListNode *front = dummy;
        ListNode *back = dummy;
        for (int i = 0; i < n; i++) {
            front = front->next;
        }
        while (front->next) {
            front = front->next;
            back = back->next;
        }
        back->next = back->next->next;
        return dummy->next;
    }
};
