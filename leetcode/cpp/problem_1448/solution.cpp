#include "../binary_tree_utils.h"
#include <climits>

class Solution {
public:
    int goodNodes(TreeNode* root) {
        int count = 0;
        dfs(root, INT_MIN, &count);
        return count;
    }

    void dfs(TreeNode* root, int target, int* count) {
        if (!root) return;
        if (root->val >= target) {
            (*count)++;
            target = root->val;
        }

        dfs(root->left, target, count);
        dfs(root->right, target, count);
    }
};
