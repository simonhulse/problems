#include "../linked_list_utils.h"
#include "solution.cpp"

void run_test(ListNode* head, int n, ListNode* expected) {
    Solution solution;
    ListNode *result = solution.removeNthFromEnd(head, n);
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
    ListNode *expected = createLinkedList({1, 2, 3, 5});
    run_test(head, 2, expected);

    std::cout << "Running test 2..." << std::endl;
    head = createLinkedList({1});
    expected = createLinkedList({});
    run_test(head, 1, expected);

    std::cout << "Running test 3..." << std::endl;
    head = createLinkedList({1, 2});
    expected = createLinkedList({1});
    run_test(head, 1, expected);
}
