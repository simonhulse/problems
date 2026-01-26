#include "../binary_tree_utils.h"
#include "solution.cpp"
#include <cassert>
#include <climits>
#include <iostream>
#include <vector>

using namespace std;

void run_test(TreeNode *root, int expected) {
    Solution solution;
    if (solution.longestZigZag(root) == expected) {
        std::cout << "TEST PASSED" << std::endl;
    } else {
        std::cout << "TEST FAILED" << std::endl;
    }
}

int main() {
    std::cout << "Running test 1..." << std::endl;
    vector<int> values = {1, INT_MAX, 2, 3, 4, INT_MAX, INT_MAX, 5, 6, INT_MAX, 7, INT_MAX, INT_MAX, INT_MAX, 8};
    TreeNode *root = createBinaryTree(values);
    run_test(root, 3);

    std::cout << "Running test 2..." << std::endl;
    values = {1, 1, 1, INT_MAX, 1, INT_MAX, INT_MAX, 1, 1, INT_MAX, 1};
    root = createBinaryTree(values);
    run_test(root, 4);

    std::cout << "Running test 3..." << std::endl;
    values = {1};
    root = createBinaryTree(values);
    run_test(root, 0);
}
