#include "../linked_list_utils.h"
#include "solution.cpp"

void run_test(ListNode* head, int left, int right, ListNode* expected) {
    Solution solution;
    ListNode *result = solution.reverseBetween(head, left, right);
    if (compareLinkedLists(result, expected)) {
        std::cout << "TEST PASSED" << std::endl;
    } else {
        std::cout << "TEST FAILED" << std::endl;
    }
}

int main() {
    std::cout << "Running test 1..." << std::endl;
    ListNode *head = createLinkedList({1, 2, 3, 4, 5});
    int left = 2, right = 4;
    ListNode *expected = createLinkedList({1, 4, 3, 2, 5});
    run_test(head, left, right, expected);

    std::cout << "Running test 2..." << std::endl;
    head = createLinkedList({5});
    left = 1, right = 1;
    expected = createLinkedList({5});
    run_test(head, left, right, expected);
}

