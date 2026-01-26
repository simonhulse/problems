#include "../binary_tree_utils.h"
#include "solution.cpp"
#include <climits>
#include <iostream>
#include <vector>

using namespace std;

void run_test(TreeNode *root1, TreeNode *root2, bool expected) {
    Solution solution;
    if (solution.leafSimilar(root1, root2) == expected) {
        std::cout << "TEST PASSED" << std::endl;
    } else {
        std::cout << "TEST FAILED" << std::endl;
    }
}

int main() {
    std::cout << "Running test 1..." << std::endl;
    vector<int> values1 = {3, 5, 1, 6, 2, 9, 8, INT_MAX, INT_MAX, 7, 4};
    TreeNode *root1 = createBinaryTree(values1);
    vector<int> values2 = {3, 5, 1, 6, 7, 4, 2, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, 9, 8};
    TreeNode *root2 = createBinaryTree(values2);
    run_test(root1, root2, true);

    std::cout << "Running test 2..." << std::endl;
    values1 = {1, 2, 3}; root1 = createBinaryTree(values1);
    values2 = {1, 3, 2}; root2 = createBinaryTree(values2);
    run_test(root1, root2, false);
}
