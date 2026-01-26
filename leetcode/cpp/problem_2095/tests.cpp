#include "../linked_list_utils.h"
#include "solution.cpp"

void run_test(ListNode* head, ListNode* expected) {
    Solution solution;
    ListNode *result = solution.deleteMiddle(head);
    if (compareLinkedLists(result, expected)) {
        std::cout << "TEST PASSED" << std::endl;
    } else {
        std::cout << "TEST FAILED" << std::endl;
    }
}

int main() {
    std::cout << "Running test 1..." << std::endl;
    ListNode* input = createLinkedList({1, 3, 4, 7, 1, 2, 6});
    ListNode* expected = createLinkedList({1, 3, 4, 1, 2, 6});
    run_test(input, expected);

    std::cout << "Running test 2..." << std::endl;
    input = createLinkedList({1, 2, 3, 4});
    expected = createLinkedList({1, 2, 4});
    run_test(input, expected);

    std::cout << "Running test 3..." << std::endl;
    input = createLinkedList({2, 1});
    expected = createLinkedList({2});
    run_test(input, expected);

    return 0;
}
