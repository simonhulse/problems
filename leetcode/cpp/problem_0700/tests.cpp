#include "../binary_tree_utils.h"
#include "solution.cpp"
#include <climits>
#include <iostream>

void run_test(TreeNode *root, int val, TreeNode *expected) {
    Solution solution;
    if (solution.searchBST(root, val) == expected) {
        std::cout << "TEST PASSED" << std::endl;
    } else {
        std::cout << "TEST FAILED" << std::endl;
    }
}

int main() {
    std::cout << "Running test 1..." << std::endl;
    std::vector<int> values = {4, 2, 7, 1, 3};
    TreeNode *root = createBinaryTree(values);
    int val = 2;
    TreeNode *expected = root->left;
    run_test(root, val, expected);

    std::cout << "Running test 2..." << std::endl;
    val = 5;
    expected = nullptr;
    run_test(root, val, expected);
}
