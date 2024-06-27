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
    int mini=INT_MAX;
void solve(TreeNode* root,TreeNode* &prev){
    if(root==NULL)
    return ;
    solve(root->left,prev);
    if(prev!=NULL){
        mini=min(mini,root->val-prev->val);
    } 
    prev=root;
    solve(root->right,prev);
}
    int getMinimumDifference(TreeNode* root) {
       
        TreeNode *prev=NULL;
        solve(root,prev);
        return mini;
    }
};