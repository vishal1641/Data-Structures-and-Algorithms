/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int solve(TreeNode* root) {
        if (root == NULL)
            return 0;
        return 1 + max(solve(root->left), solve(root->right));
    }
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        if (root == NULL)
            return 0;
        int lh = solve(root->left);
        int rh = solve(root->right);
        if (lh == rh)
            return root;
        if (lh > rh) {
            return lcaDeepestLeaves(root ->left);
        } else
          return   lcaDeepestLeaves(root->right);
    }

}
;