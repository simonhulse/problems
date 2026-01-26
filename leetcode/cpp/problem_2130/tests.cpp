#include "../linked_list_utils.h"
#include "solution.cpp"

void run_test(ListNode* head, int expected) {
    Solution solution;
    int result = solution.pairSum(head);
    if (result == expected) {
        std::cout << "TEST PASSED" << std::endl;
    } else {
        std::cout << "TEST FAILED" << std::endl;
    }
}

int main() {
    std::cout << "Running test 1..." << std::endl;
    ListNode* input = createLinkedList({5, 4, 2, 1});
    int expected = 6;
    run_test(input, expected);

    std::cout << "Running test 2..." << std::endl;
    input = createLinkedList({4, 2, 2, 3});
    expected = 7;
    run_test(input, expected);

    std::cout << "Running test 3..." << std::endl;
    input = createLinkedList({1, 100000});
    expected = 100001;
    run_test(input, expected);
    return 0;
}
