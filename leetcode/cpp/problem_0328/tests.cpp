#include "../linked_list_utils.h"
#include "solution.cpp"

void run_test(ListNode* head, ListNode* expected) {
    Solution solution;
    ListNode *result = solution.oddEvenList(head);
    printLinkedList(result);
    if (compareLinkedLists(result, expected)) {
        std::cout << "TEST PASSED" << std::endl;
    } else {
        std::cout << "TEST FAILED" << std::endl;
    }
}

int main() {
    std::cout << "Running test 1..." << std::endl;
    ListNode* input = createLinkedList({1, 2, 3, 4, 5});
    ListNode* expected = createLinkedList({1, 3, 5, 2, 4});
    run_test(input, expected);

    std::cout << "Running test 2..." << std::endl;
    input = createLinkedList({2, 1, 3, 5, 6, 4, 7});
    expected = createLinkedList({2, 3, 6, 7, 1, 5, 4});
    run_test(input, expected);
    return 0;
}
