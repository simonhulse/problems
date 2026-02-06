#include <iostream>
#include <vector>
#include "solution.cpp"

void run_test(vector<int>& nums, int k, int expected) {
    Solution solution;
    int result = solution.findKthLargest(nums, k);
    if (result == expected) {
        std::cout << "TEST PASSED" << std::endl;
    } else {
        std::cout << "TEST FAILED" << std::endl;
    }
}

int main() {
    std::cout << "Running test 1..." << std::endl;
    vector<int> nums = {3, 2, 1, 5, 6, 4};
    run_test(nums, 2, 5);

    std::cout << "Running test 2..." << std::endl;
    nums = {3, 2, 3, 1, 2, 4, 5, 5, 6};
    run_test(nums, 4, 4);
}
