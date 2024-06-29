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
    bool isValidBST(TreeNode* root) {
        return solve(root, (long long int)LLONG_MAX,(long long int)LLONG_MIN);
    }
    bool solve(TreeNode* root,long long int max,long long int min){
        if(root==NULL)
        return true;
        if(root->val>=max||root->val<=min)
        return false;
        return solve(root->left,root->val,min)&&solve(root->right,max,root->val);
    }
};