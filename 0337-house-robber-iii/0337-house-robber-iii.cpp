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
pair <int,int>solve(TreeNode*root){
    if(root==NULL)
    return {0,0};
    pair<int,int>l=solve(root->left);
    pair<int,int>r=solve(root->right);
    pair<int,int>ans;
    ans.first=root->val+l.second+r.second;
    ans.second=max(l.first,l.second)+max(r.first,r.second);
    return ans;
    }
    int rob(TreeNode* root) {
       pair<int,int>ans=solve(root);
       return max(ans.first,ans.second); 
    }
};