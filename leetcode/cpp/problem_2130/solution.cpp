#include "../linked_list_utils.h"
#include <algorithm>
#include <climits>

class Solution {
public:
    int pairSum(ListNode* head) {
        // Start by finding the middle of the ListNode
        ListNode *slow = head;
        ListNode *fast = head->next;
        while(fast->next) {
            slow = slow->next;
            // always even-length list, so fast->next->next guaranteed to exist
            fast = fast->next->next;
        }
        ListNode *head2 = slow->next;
        slow->next = nullptr;

        // Reverse list 2
        ListNode *temp = nullptr;
        ListNode *curr = head2;
        ListNode *prev = nullptr;
        while (curr) {
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }

        // prev is the head of the reversed second half
        ListNode *l1 = head;
        ListNode *l2 = prev;
        int result = INT_MIN;
        while (l1) {
            result = std::max(l1->val + l2->val, result);
            l1 = l1->next;
            l2 = l2->next;
        }
        return result;
    }
};
