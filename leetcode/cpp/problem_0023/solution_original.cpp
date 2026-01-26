#include "../linked_list_utils.h"
#include <vector>

class Solution {
    public:
        ListNode* mergeKLists(std::vector<ListNode*>& lists) {
            ListNode *head = nullptr;
            ListNode *tail = nullptr;

            while (true) {
                int index = -1;
                ListNode *nextNode = nullptr;
                for (int i = 0; i < lists.size(); i++) {
                    ListNode* listHead = lists[i];
                    if (!listHead) continue;
                    if (!nextNode || listHead->val < nextNode->val) {
                        nextNode = listHead;
                        index = i;
                    }
                }
                if (!nextNode) break;
                // lists[index] = lists[index]->next;
                if (!head) {
                    head = nextNode;
                    tail = nextNode;
                } else {
                    tail->next = nextNode;
                    tail = tail->next;
                }
                nextNode->next = nullptr;
            }
            return head;
        }
};
