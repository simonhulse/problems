#include "../binary_tree_utils.h"
#include <vector>

class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        std::vector<int> leafValues1 = {}, leafValues2 = {};
        getLeafValues(root1, leafValues1);
        getLeafValues(root2, leafValues2);
        return leafValues1 == leafValues2;
    }

    void getLeafValues(TreeNode* root, std::vector<int>& values) {
        if (!root->left && !root->right) {
            values.push_back(root->val);
            return;
        }
        if (root->left) getLeafValues(root->left, values);
        if (root->right) getLeafValues(root->right, values);
    }
};
