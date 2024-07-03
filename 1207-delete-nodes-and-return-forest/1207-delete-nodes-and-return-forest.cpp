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
TreeNode*solve(TreeNode *root,set<int>&s,vector<TreeNode*>&result){

if(root==NULL)
return NULL;
  root->left= solve(root->left,s,result);
  root->right=  solve(root->right,s,result);
    if(s.find(root->val)!=s.end()){
        if(root->left!=NULL)
        result.push_back(root->left);
        if(root->right!=NULL)
        result.push_back(root->right);
        root=NULL;
    }
    
    return root;
}
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& nums) {
        set<int>s;
        for(int i=0;i<nums.size();i++)
        s.insert(nums[i]);
        vector<TreeNode*>result;
        solve(root,s,result);
        if(s.find(root->val) == s.end()) result.push_back(root);
        return result;

    }
};