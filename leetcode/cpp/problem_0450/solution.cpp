#include "../binary_tree_utils.h"

class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (!root) return nullptr;
        if (root->val > key) {
            root->left = deleteNode(root->left, key);
            return root;
        }
        if (root->val < key) {
            root->right = deleteNode(root->right, key);
            return root;
        }

        if (!root->left) {
            return root->right;
        }

        if (!root->right) {
            return root->left;
        }

        TreeNode *inorderSuccessor = root->right;
        while (inorderSuccessor->left) {
            inorderSuccessor = inorderSuccessor->left;
        }
        inorderSuccessor->left = root->left;

        root = root->right;
        return root;
    }
};
