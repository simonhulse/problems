#include <iostream>
#include "solution.cpp"
using namespace std;

void run_test(vector<int> nums, int k, int expected) {
    Solution solution;
    if (solution.maxOperations(nums, k) == expected) {
        std::cout << "TEST PASSED" << std::endl;
    } else {
        std::cout << "TEST FAILED" << std::endl;
    }
}

int main() {
    std::cout << "Running test 1..." << std::endl;
    run_test({1, 2, 3, 4}, 5, 2);
    std::cout << "Running test 2..." << std::endl;
    run_test({3, 1, 3, 4, 3}, 6, 1);
    return 0;
}
