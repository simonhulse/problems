#include <iostream>
#include "solution.cpp"
using namespace std;

void run_test(vector<int> nums, vector<int> expected) {
    Solution solution;
    if (solution.productExceptSelf(nums) == expected) {
        std::cout << "TEST PASSED" << std::endl;
    } else {
        std::cout << "TEST FAILED" << std::endl;
    }
}

int main() {
    std::cout << "Running test 1..." << std::endl;
    run_test({1, 2, 3, 4}, {24, 12, 8, 6});
    std::cout << "Running test 2..." << std::endl;
    run_test({-1, 1, 0, -3, 3}, {0, 0, 9, 0, 0});
    return 0;
}
