#include <iostream>
#include <vector>
#include "solution.cpp"

void run_test(std::vector<int>& nums1, std::vector<int> nums2, int k, int expected) {
    Solution solution;
    int result = solution.maxScore(nums1, nums2, k);
    if (result == expected) {
        std::cout << "TEST PASSED" << std::endl;
    } else {
        std::cout << "TEST FAILED" << std::endl;
    }
}

int main() {
    std::cout << "Running test 1..." << std::endl;
    std::vector<int> nums1 = {1, 3, 3, 2};
    std::vector<int> nums2 = {2, 1, 3, 4};
    run_test(nums1, nums2, 3, 12);

    std::cout << "Running test 2..." << std::endl;
    nums1 = {4, 2, 3, 1, 1};
    nums2 = {7, 5, 10, 9, 6};
    run_test(nums1, nums2, 1, 30);
}
