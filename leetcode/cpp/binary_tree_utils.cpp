#include "binary_tree_utils.h"
#include <algorithm>
#include <climits>
#include <iostream>
#include <queue>
#include<vector>

TreeNode::TreeNode() : val(0), left(nullptr), right(nullptr) {}
TreeNode::TreeNode(int x) : val(x), left(nullptr), right(nullptr){}
TreeNode::TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}

TreeNode* createBinaryTree(const std::vector<int>& values) {
    if (values.empty()) return nullptr;

    TreeNode* root = new TreeNode(values[0]);
    std::queue<TreeNode*> q;
    q.push(root);

    size_t index = 1;
    while (!q.empty() && index < values.size()) {
        TreeNode* curr = q.front(); q.pop();

        if (index < values.size() && values[index] != INT_MAX) {
            curr->left = new TreeNode(values[index]);
            q.push(curr->left);
        }
        index++;

        if (index < values.size() && values[index] != INT_MAX) {
            curr->right = new TreeNode(values[index]);
            q.push(curr->right);
        }
        index++;
    }

    return root;
}

bool compareBinaryTrees(TreeNode *p, TreeNode *q) {
    if (!p && !q) return true;
    if (!p || !q) return false;
    return (
        (p->val == q->val) &&
        compareBinaryTrees(p->left, q->left) &&
        compareBinaryTrees(p->right, p->right)
    );
}

// Function to print the linked list
void printBinaryTree(TreeNode* root) {
    if (!root) return;
    std::cout << root->val << " ";
    printBinaryTree(root->left);
    printBinaryTree(root->right);
}

