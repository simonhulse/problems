#include "../binary_tree_utils.h"
#include "solution.cpp"
#include <climits>
#include <iostream>

void run_test(TreeNode *root, int expected) {
    Solution solution;
    if (solution.maxLevelSum(root) == expected) {
        std::cout << "TEST PASSED" << std::endl;
    } else {
        std::cout << "TEST FAILED" << std::endl;
    }
}

int main() {
    std::cout << "Running test 1..." << std::endl;
    std::vector<int> values = {1, 7, 0, 7, -8, INT_MAX, INT_MAX};
    TreeNode *root = createBinaryTree(values);
    int expected = 2;
    run_test(root, expected);

    std::cout << "Running test 2..." << std::endl;
    values = {989, INT_MAX, 10250, 98693, -89388, INT_MAX, INT_MAX, INT_MAX, -32127};
    root = createBinaryTree(values);
    expected = 2;
    run_test(root, expected);
}
