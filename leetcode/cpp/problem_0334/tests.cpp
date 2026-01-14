#include <iostream>
#include "solution.cpp"
using namespace std;

void run_test(vector<int> nums, bool expected) {
    Solution solution;
    if (solution.increasingTriplet(nums) == expected) {
        std::cout << "TEST PASSED" << std::endl;
    } else {
        std::cout << "TEST FAILED" << std::endl;
    }
}

int main() {
    std::cout << "Running test 1..." << std::endl;
    run_test({1, 2, 3, 4, 5}, true);
    std::cout << "Running test 2..." << std::endl;
    run_test({5, 4, 3, 2, 1}, false);
    std::cout << "Running test 3..." << std::endl;
    run_test({2, 1, 5, 0, 4, 6}, true);
    std::cout << "Running test 4..." << std::endl;
    run_test({2, 4, -2, -3}, false);
    std::cout << "Running test 5..." << std::endl;
    run_test({20, 100, 10, 12, 5, 13}, true);
    std::cout << "Running test 6..." << std::endl;
    run_test({1, 5, 0, 4, 1, 3}, true);
    return 0;
}
