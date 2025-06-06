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
    int countNodes(TreeNode* root)
     {
      if(root==NULL)
      return 0;
      int l=findleft(root);
      int r=findright(root);
      if(l==r)
      return (1<<l)-1;
      return 1+countNodes(root->left)+countNodes(root->right);  
    }
    int findleft(TreeNode* node)
    {
int h=0;
while(node)
{
    h++;
    node=node->left;
}
return h;
    }
    int findright(TreeNode* node)
    {
        int h=0;
        while(node)
        {
            h++;
            node=node->right;
        }
        return h;}
};