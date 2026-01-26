#ifndef BINARY_TREE_UTILS_H
#define BINARY_TREE_UTILS_H

#include <vector>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode();
    TreeNode(int x);
    TreeNode(int x, TreeNode *left, TreeNode *right);
};

TreeNode* createBinaryTree(const std::vector<int>& values);
bool compareBinaryTrees(TreeNode* p, TreeNode* q);
void printBinaryTree(TreeNode* root);

#endif

