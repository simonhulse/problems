#include "../binary_tree_utils.h"
#include "solution.cpp"
#include <cassert>
#include <climits>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

void run_test(TreeNode *root, vector<int>& expected) {
    Solution solution;
    if (solution.rightSideView(root) == expected) {
        std::cout << "TEST PASSED" << std::endl;
    } else {
        std::cout << "TEST FAILED" << std::endl;
    }
}

int main() {
    std::cout << "Running test 1..." << std::endl;
    vector<int> values = {1, 2, 3, INT_MAX, 5, INT_MAX, 4};
    TreeNode *root = createBinaryTree(values);
    vector<int> expected = {1, 3, 4};
    run_test(root, expected);

    std::cout << "Running test 2..." << std::endl;
    values = {1, 2, 3, 4, INT_MAX, INT_MAX, INT_MAX, 5};
    root = createBinaryTree(values);
    expected = {1, 3, 4, 5};
    run_test(root, expected);

    std::cout << "Running test 3..." << std::endl;
    values = {1, INT_MAX, 3};
    root = createBinaryTree(values);
    expected = {1, 3};
    run_test(root, expected);

    std::cout << "Running test 4..." << std::endl;
    values = {};
    root = createBinaryTree(values);
    expected = {};
    run_test(root, expected);
}
