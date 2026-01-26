#include "../binary_tree_utils.h"
#include <algorithm>

class Solution {
public:
    int maxDepth(TreeNode* root) {
        return dfs(root, 0);
    }

    int dfs(TreeNode *node, int height) {
        if (!node) return height;
        return std::max(dfs(node->left, height + 1), dfs(node->right, height + 1));
    }
};
