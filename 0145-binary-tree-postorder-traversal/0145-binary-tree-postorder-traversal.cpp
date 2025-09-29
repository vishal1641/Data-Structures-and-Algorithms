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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        TreeNode* node = root;
        if (root == NULL)
            return {};
        stack<TreeNode*> a;
        stack<TreeNode*> b;
        a.push(node);
        while (!a.empty()) {
            TreeNode* x = a.top();
            a.pop();
            b.push(x);
            if (x->left != NULL)
                a.push(x->left);
            if (x->right != NULL)
                a.push(x->right);
        }
        while (!b.empty()) {
        TreeNode* n = b.top();
            b.pop();
            ans.push_back(n->val);
        }
        return ans;
    }
};