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
    int widthOfBinaryTree(TreeNode* root) {
        if(root==NULL)
        return 0;
        queue<pair<TreeNode *,int>>q;
        int ans=0;
        q.push({root,0});
        while(q.size()!=0){
        int last=0,first=0;
            int size=q.size();
            int mini=q.front().second;
            for(int i=0;i<size;i++){
                int curr=q.front().second-mini;
                TreeNode* temp=q.front().first;
                q.pop();
                if(i==0)
                first=curr;
                if(i==size-1)
                last=curr;
                if(temp->left!=NULL)
                q.push({temp->left,(long long)2*curr+1});
                if(temp->right!=NULL)
                q.push({temp->right,(long long)2*curr+2});
            }
            ans=max(ans,last-first+1);
        }
        return ans;
    }
};