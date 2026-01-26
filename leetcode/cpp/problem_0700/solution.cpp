#include "../binary_tree_utils.h"

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode *node = root;
        while (node) {
            if (node->val == val) return node;
            if (node->val < val) node = node->right;
            else node = node->left;
        }
        return nullptr;
    }
};
