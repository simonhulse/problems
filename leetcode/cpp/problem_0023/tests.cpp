#include "../linked_list_utils.h"
#include "solution.cpp"
#include <vector>

void run_test(std::vector<ListNode*>& lists, ListNode* expected) {
    Solution solution;
    ListNode *result = solution.mergeKLists(lists);
    printLinkedList(result);
    if (compareLinkedLists(result, expected)) {
        std::cout << "TEST PASSED" << std::endl;
    } else {
        std::cout << "TEST FAILED" << std::endl;
    }
}

int main() {
    std::cout << "Running test 1..." << std::endl;
    std::vector<ListNode*> input = {
        createLinkedList({1, 4, 5}),
        createLinkedList({1, 3, 4}),
        createLinkedList({2, 6})
    };

    ListNode* expected = createLinkedList({1, 1, 2, 3, 4, 4, 5, 6});
    run_test(input, expected);

    std::cout << "Running test 2..." << std::endl;
    input = {};
    expected = nullptr;
    run_test(input, expected);

    std::cout << "Running test 3..." << std::endl;
    input = {{}};
    expected = nullptr;
    run_test(input, expected);
}
