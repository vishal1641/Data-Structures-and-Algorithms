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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL)
        return NULL;
        if(root->val==key)
        return help(root);
        TreeNode* temp=root;
        while(root)
    {

        
        if(root->val>key)
        {
            if(root->left!=NULL&& root->left->val==key){
                root->left=help(root->left);
                break;
            }
            else
            root=root->left;
        }
        else
        {
            if(root->right!=NULL&&root->right->val==key){
                root->right=help(root->right);
                break;
            }
            else
            root=root->right;
        }
    }
    return temp;
    }
    TreeNode* help(TreeNode* root){
        if(!root->left)
        return root->right;
        else if(!root->right)
        return root->left;
        TreeNode* rightchild=root->right;
        TreeNode* lastright=findlr(root->left);
        lastright->right=rightchild;
        return root->left;
    }
    TreeNode* findlr(TreeNode* root){
        while(root->right)
        root=root->right;
        return root;
    }
};