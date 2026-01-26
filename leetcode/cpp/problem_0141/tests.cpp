#include "../linked_list_utils.h"
#include "solution.cpp"

void run_test(ListNode* head, int expected) {
    Solution solution;
    bool result = solution.hasCycle(head);
    if (result == expected) {
        std::cout << "TEST PASSED" << std::endl;
    } else {
        std::cout << "TEST FAILED" << std::endl;
    }
}

int main() {
    std::cout << "Running test 1..." << std::endl;
    ListNode *head= new ListNode(3);
    head->next = new ListNode(2);
    head->next->next = new ListNode(0);
    head->next->next->next = new ListNode(-4);
    head->next->next->next->next = head->next;
    run_test(head, true);

    std::cout << "Running test 2..." << std::endl;
    head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = head;
    run_test(head, true);

    std::cout << "Running test 3..." << std::endl;
    head = new ListNode(1);
    run_test(head, false);
    return 0;
}
