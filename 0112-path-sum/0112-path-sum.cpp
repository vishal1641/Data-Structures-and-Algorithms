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
void simple(TreeNode* &root,int &targetSum,int &sum,bool& ans){
    if(root==NULL)
       {
      
        return ;
       }
       sum+=root->val;
        if(root->left==NULL&&root->right==NULL&&sum==targetSum)
        {
           
            ans= true;
            
            return ;
        }
        simple(root->left,targetSum,sum,ans);
       
        simple(root->right,targetSum,sum,ans);
        sum-=root->val;
        return;
}
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum=0;
        bool ans=false;
         simple(root,targetSum,sum,ans);
        return ans;
    }
};