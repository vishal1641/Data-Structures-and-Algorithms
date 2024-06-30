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
int ans=0;
void solve(TreeNode*root,int target,long long &curr){
    if(root==NULL)
    return;
     curr+=root->val;
    if(curr==target)
    ans++;
     solve(root->left,target,curr);
     solve(root->right,target,curr);
     curr-=root->val;
    
}
    int pathSum(TreeNode* root, int target) {
 if(root==NULL)
 return 0;
        long long  curr=0;
        solve(root,target,curr);
        pathSum(root->left,target);
        pathSum(root->right,target);
        return ans;
    }
};