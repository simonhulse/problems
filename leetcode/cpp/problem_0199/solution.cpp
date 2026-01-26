#include "../binary_tree_utils.h"
#include <queue>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
        // edge case: empty tree
        if (!root) return result;

        queue<TreeNode*> q;
        q.push(root);
        int currCount = 1;
        int nextCount = 0;

        while (!q.empty()) {
            TreeNode *node = q.front(); q.pop();
            if (node->left) {
                q.push(node->left);
                nextCount++;
            }
            if (node->right) {
                q.push(node->right);
                nextCount++;
            }
            currCount--;
            if (currCount == 0) {
                result.push_back(node->val);
                currCount = nextCount;
                nextCount = 0;
            }
        }

        return result;
    }
};
