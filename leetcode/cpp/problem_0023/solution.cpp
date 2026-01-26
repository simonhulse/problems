#include "../linked_list_utils.h"
#include <queue>
#include <vector>

struct ListNodeCompare {
    bool operator()(ListNode *a, ListNode *b) {
        return a->val > b->val;
    }
};

class Solution {
    public:
        ListNode* mergeKLists(std::vector<ListNode*>& lists) {
            ListNode *dummy = new ListNode(0);
            ListNode *tail = dummy;
            std::priority_queue<ListNode*, std::vector<ListNode*>, ListNodeCompare> queue;

            for (ListNode *listHead : lists) {
                if (listHead) queue.push(listHead);
            }

            while (!queue.empty()) {
                ListNode *toAdd = queue.top();
                queue.pop();
                if (toAdd->next) queue.push(toAdd->next);
                tail->next = toAdd;
                tail = tail->next;
            }
            return dummy->next;
        }
};
