#include "../linked_list_utils.h"
#include "solution.cpp"

void run_test(ListNode* head, int k, ListNode* expected) {
    Solution solution;
    ListNode *result = solution.reverseKGroup(head, k);
    printLinkedList(result);
    if (compareLinkedLists(result, expected)) {
        std::cout << "TEST PASSED" << std::endl;
    } else {
        std::cout << "TEST FAILED" << std::endl;
    }
}

int main() {
    std::cout << "Running test 1..." << std::endl;
    ListNode *head = createLinkedList({1, 2, 3, 4, 5});
    int k = 2;
    ListNode *expected = createLinkedList({2, 1, 4, 3, 5});
    run_test(head, k, expected);

    std::cout << "Running test 2..." << std::endl;
    head = createLinkedList({1, 2, 3, 4, 5});
    k = 3;
    expected = createLinkedList({3, 2, 1, 4, 5});
    run_test(head, k, expected);
}

