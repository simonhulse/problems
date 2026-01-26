#include "../binary_tree_utils.h"
#include "solution.cpp"
#include <climits>
#include <iostream>

void run_test(TreeNode *root, int key, std::vector<TreeNode*>& expecteds) {
    Solution solution;
    bool found = false;
    TreeNode *result = solution.deleteNode(root, key);
    printBinaryTree(result);
    for (TreeNode *expected : expecteds) {
        if (compareBinaryTrees(result, expected)) {
            found = true;
            break;
        }
    }
    if (found) {
        std::cout << "TEST PASSED" << std::endl;
    } else {
        std::cout << "TEST FAILED" << std::endl;
    }
}

int main() {
    std::cout << "Running test 1..." << std::endl;
    std::vector<int> preValues = {5, 3, 6, 2, 4, INT_MAX, 7};
    TreeNode *root = createBinaryTree(preValues);
    std::vector<std::vector<int>> postValues = {
    };
    std::vector<TreeNode*> expecteds = {
        createBinaryTree({5, 4, 6, 2, INT_MAX, INT_MAX, 7}),
        createBinaryTree({5, 2, 6, INT_MAX, 4, INT_MAX, 7})
    };
    run_test(root, 3, expecteds);

    std::cout << "Running test 2..." << std::endl;
    expecteds = {root};
    run_test(root, 0, expecteds);
}
