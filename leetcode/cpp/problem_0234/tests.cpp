#include "../linked_list_utils.h"
#include "solution.cpp"

void run_test(ListNode* head, bool expected) {
    Solution solution;
    bool result = solution.isPalindrome(head);
    if (result == expected) {
        std::cout << "TEST PASSED" << std::endl;
    } else {
        std::cout << "TEST FAILED" << std::endl;
    }
}

int main() {
    std::cout << "Running test 1..." << std::endl;
    ListNode *head = createLinkedList({1, 2, 2, 1});
    run_test(head, true);

    std::cout << "Running test 2..." << std::endl;
    head = createLinkedList({1, 2});
    run_test(head, false);
}
