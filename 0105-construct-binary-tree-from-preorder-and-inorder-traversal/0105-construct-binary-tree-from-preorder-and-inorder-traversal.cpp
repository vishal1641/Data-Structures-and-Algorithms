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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder)
     {
     map<int,int>m;
     for(int i=0;i<inorder.size();i++)
     {
         m[inorder[i]]=i;
     } 
     TreeNode* root=b(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,m) ;
     return root; 
    }
    TreeNode* b(vector<int>&preorder,int pstart,int pend,vector<int>&inorder,int instart,int inend,map<int,int>&m){
        if(pstart>pend||instart>inend)
        return NULL;
        TreeNode * root= new TreeNode(preorder[pstart]);
        int inroot=m[root->val];
        int numsleft=inroot-instart;
        root->left=b(preorder,pstart+1,pend+numsleft,inorder,instart,inroot-1,m);
        root->right=b(preorder,pstart+numsleft+1,pend,inorder,inroot+1,inend,m);
        return root;
    }
};