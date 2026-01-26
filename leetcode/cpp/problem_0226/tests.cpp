#include "../binary_tree_utils.h"
#include "solution.cpp"
#include <climits>
#include <iostream>

void run_test(TreeNode *root, TreeNode *expected) {
    Solution solution;
    TreeNode *result = solution.invertTree(root);
    if (compareBinaryTrees(result, expected)) {
        std::cout << "TEST PASSED" << std::endl;
    } else {
        std::cout << "TEST FAILED" << std::endl;
    }
}

int main() {
    std::cout << "Running test 1..." << std::endl;
    std::vector<int> preValues = {4, 2, 7, 1, 3, 6, 9};
    TreeNode *root = createBinaryTree(preValues);
    std::vector<int> postValues = {4, 7, 2, 9, 6, 3, 1};
    TreeNode *expected = createBinaryTree(postValues);
    run_test(root, expected);

    preValues = {2, 1, 3}; root = createBinaryTree(preValues);
    postValues = {2, 3, 1}; expected = createBinaryTree(postValues);

    std::cout << "Running test 2..." << std::endl;
    run_test(root, expected);
}
