#include "../binary_tree_utils.h"
#include "solution.cpp"
#include <climits>
#include <iostream>
#include <vector>

using namespace std;

void run_test(TreeNode *root, int targetSum, int expected) {
    Solution solution;
    if (solution.pathSum(root, targetSum) == expected) {
        std::cout << "TEST PASSED" << std::endl;
    } else {
        std::cout << "TEST FAILED" << std::endl;
    }
}

int main() {
    std::cout << "Running test 1..." << std::endl;
    vector<int> values = {10, 5, -3, 3, 2, INT_MAX, 11, 3, -2, INT_MAX, 1};
    TreeNode *root = createBinaryTree(values);
    run_test(root, 8, 3);

    std::cout << "Running test 2..." << std::endl;
    values = {5, 4, 8, 11, INT_MAX, 13, 4, 7, 2, INT_MAX, INT_MAX, 5, 1};
    root = createBinaryTree(values);
    run_test(root, 22, 3);
}
