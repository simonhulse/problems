#include "../binary_tree_utils.h"
#include <climits>
#include <queue>

class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        std::queue<TreeNode*> q;
        q.push(root);

        int level = 0;
        int result = 0;
        int highScore = INT_MIN;

        while (!q.empty()) {
            level++;
            int n = q.size();
            int levelScore = 0;

            for (int i=0; i<n; i++) {
                TreeNode *node = q.front(); q.pop();
                levelScore += node->val;
                if (node->left) {
                    q.push(node->left);
                }
                if (node->right) {
                    q.push(node->right);
                }
            }
            if (levelScore > highScore) {
                highScore = levelScore;
                result = level;
            }
        }

        return result;
    }
};
