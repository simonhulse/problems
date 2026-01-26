#include "../binary_tree_utils.h"
#include "solution.cpp"
#include <cassert>
#include <climits>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

void run_test(TreeNode *root, TreeNode *p, TreeNode *q, TreeNode *expected) {
    Solution solution;
    if (solution.lowestCommonAncestor(root, p, q) == expected) {
        std::cout << "TEST PASSED" << std::endl;
    } else {
        std::cout << "TEST FAILED" << std::endl;
    }
}

int main() {
    std::cout << "Running test 1..." << std::endl;
    vector<int> values = {3, 5, 1, 6, 2, 0, 8, INT_MAX, INT_MAX, 7, 4};
    TreeNode *root = createBinaryTree(values);
    TreeNode *p = root->left;
    TreeNode *q = root->right;
    TreeNode *expected = root;
    run_test(root, p, q, expected);

    std::cout << "Running test 2..." << std::endl;
    q = root->left->right->right;
    expected = p;
    run_test(root, p, q, p);

    std::cout << "Running test 3..." << std::endl;
    values = {1, 2};
    root = createBinaryTree(values);
    p = root;
    q = root->left;
    expected = root;
    run_test(root, p, q, expected);
}
