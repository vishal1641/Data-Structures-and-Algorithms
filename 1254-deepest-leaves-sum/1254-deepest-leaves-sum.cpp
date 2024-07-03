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
    int deepestLeavesSum(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int s=0;
        while(q.size()!=0){
            int n=q.size();
           s=0;
            for(int i=0;i<n;i++){
                TreeNode* temp=q.front();
                q.pop();
                s+=temp->val;
                if(temp->left!=NULL){
                q.push(temp->left);
                }
                if(temp->right!=NULL){
                q.push(temp->right);
                }
            }
            
        }
        
        return s;
    }
};