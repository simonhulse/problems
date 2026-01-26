#include "../linked_list_utils.h"
#include "solution.cpp"

void run_test(ListNode* list1, ListNode* list2, ListNode* expected) {
    Solution solution;
    ListNode *result = solution.mergeTwoLists(list1, list2);
    printLinkedList(result);
    if (compareLinkedLists(result, expected)) {
        std::cout << "TEST PASSED" << std::endl;
    } else {
        std::cout << "TEST FAILED" << std::endl;
    }
}

int main() {
    std::cout << "Running test 1..." << std::endl;
    ListNode *list1 = createLinkedList({1, 2, 4});
    ListNode *list2 = createLinkedList({1, 3, 4});

    ListNode* expected = createLinkedList({1, 1, 2, 3, 4, 4});
    run_test(list1, list2, expected);
}
