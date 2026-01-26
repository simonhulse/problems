#include "../binary_tree_utils.h"
#include <unordered_map>

class Solution {
public:
    int pathSum(TreeNode* root, int targetSum) {
        std::unordered_map<long, int> prefixSums;
        prefixSums[0] = 1;
        return dfs(root, prefixSums, 0, targetSum);
    }

    int dfs(
        TreeNode* node,
        std::unordered_map<long, int>& prefixSums,
        long currentCount,
        int targetSum
    ) {
        if (!node) return 0;
        currentCount += node->val;
        int pathCount = prefixSums[currentCount - targetSum];

        ++prefixSums[currentCount];

        pathCount += dfs(node->left, prefixSums, currentCount, targetSum);
        pathCount += dfs(node->right, prefixSums, currentCount, targetSum);

        --prefixSums[currentCount];

        return pathCount;
    }
};
