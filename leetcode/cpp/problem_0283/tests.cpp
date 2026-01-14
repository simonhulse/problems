#include <iostream>
#include "solution.cpp"
using namespace std;

void run_test(vector<int> nums, vector<int> expected) {
    Solution solution;
    solution.moveZeroes(nums);
    if (nums == expected) {
        std::cout << "TEST PASSED" << std::endl;
    } else {
        std::cout << "TEST FAILED" << std::endl;
    }
}

int main() {
    std::cout << "Running test 1..." << std::endl;
    run_test({0, 1, 0, 3, 12}, {1, 3, 12, 0, 0});
    std::cout << "Running test 2..." << std::endl;
    run_test({0}, {0});
    return 0;
}
