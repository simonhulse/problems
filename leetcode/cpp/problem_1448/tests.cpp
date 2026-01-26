#include "../binary_tree_utils.h"
#include "solution.cpp"
#include <climits>
#include <iostream>
#include <vector>

using namespace std;

void run_test(TreeNode *root, int expected) {
    Solution solution;
    if (solution.goodNodes(root) == expected) {
        std::cout << "TEST PASSED" << std::endl;
    } else {
        std::cout << "TEST FAILED" << std::endl;
    }
}

int main() {
    std::cout << "Running test 1..." << std::endl;
    vector<int> values = {3, 1, 4, 3, INT_MAX, 1, 5};
    TreeNode *root = createBinaryTree(values);
    run_test(root, 4);

    std::cout << "Running test 2..." << std::endl;
    values = {3, 3, INT_MAX, 4, 2};
    root = createBinaryTree(values);
    run_test(root, 3);

    std::cout << "Running test 3..." << std::endl;
    values = {1};
    root = createBinaryTree(values);
    run_test(root, 1);
}
