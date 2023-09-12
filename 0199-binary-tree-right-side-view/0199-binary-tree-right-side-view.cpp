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
        vector<int>ans;
    void recursion(TreeNode* root,int level){
        if(root==NULL)
        return;
        if(ans.size()==level)
        ans.push_back(root->val);
        recursion(root->right,level+1); recursion(root->left,level+1);
    }
public:
    vector<int> rightSideView(TreeNode* root) {
      recursion(root,0);
      return ans;
    }
};