/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        if(root==NULL)
        return {};
        vector<int>ans;
        stack<TreeNode*>s;
        s.push(root);
        while(!s.empty()){
            TreeNode* a=s.top();
            s.pop();
            ans.push_back(a->val);
            if(a->right!=NULL)
            s.push(a->right);
            if(a->left!=NULL)
            s.push(a->left);
        }
        return ans;;;;;
    }
};