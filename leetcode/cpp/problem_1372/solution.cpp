#include "../binary_tree_utils.h"
#include <algorithm>

class Solution {
public:
    int longestZigZag(TreeNode* root) {
        return dfs(root, false, 0);
    }

    int dfs(TreeNode* node, bool leftChild, int count) {
        if (!node) return count - 1;
        // leftChild = current node was parent->left
        if (leftChild) {
            return std::max(
                dfs(node->right, false, count + 1),
                dfs(node->left, true, 1)
            );
        } else {
            return std::max(
                dfs(node->left, true, count + 1),
                dfs(node->right, false, 1)
            );
        }
    }
};
