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
int maxi;
void solve(TreeNode*root,TreeNode* child){
    if(root==NULL||child==NULL)
    return ;
     maxi=max(maxi,abs(root->val-child->val));
    solve(root,child->left);
    solve(root,child->right);

}
    void ans(TreeNode* root) {
        if(root==NULL)
        return ;
        solve(root,root->left);
        solve(root,root->right);
        ans(root->left);
        ans(root->right);
    }
     int maxAncestorDiff(TreeNode* root) {
        if(root==NULL)
        return NULL;
         maxi=-1;
        ans(root);
        return maxi;}
};