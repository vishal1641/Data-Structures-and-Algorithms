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
    int findMin(unordered_map<TreeNode*,TreeNode*>&m,TreeNode*target){
queue<TreeNode*>q;
q.push(target);
unordered_map<TreeNode*,int>vis;
vis[target]=1;
int mini=0;
while(!q.empty())
{
    int size=q.size();
    bool flag=false;
    for(int i=0;i<size;i++)
    {
        TreeNode* node=q.front();
        q.pop();
        if(node->left&&!vis[node->left]){
            vis[node->left]=1;
            flag=true;
            q.push(node->left);}
        
        if(node->right&&!vis[node->right]){
            vis[node->right]=1;
            flag=true;
            q.push(node->right);}
            if(m[node]&&!vis[m[node]]){
                vis[m[node]]=1;
                flag=true;
                q.push(m[node]); 
            }
        }
        if(flag)
        mini++;
}return mini;
    
}
    TreeNode*mapparents(TreeNode*root,unordered_map<TreeNode*,TreeNode*>&m,int start){
        queue<TreeNode*>q;
        q.push(root);
        TreeNode* res;
        while(!q.empty())
        {
            TreeNode* node=q.front();
            q.pop();
            if(node->val==start)
            res=node;
            if(node->left){
                m[node->left]=node;
                q.push(node->left);
            }
            if(node->right){
                m[node->right]=node;
                q.push(node->right);
            }
        }
    return res;
    }
public:
    int amountOfTime(TreeNode* root, int start)
     {
      unordered_map<TreeNode*,TreeNode*>m;
      TreeNode* target=mapparents(root,m,start);
      return findMin(m,target);
    }
};