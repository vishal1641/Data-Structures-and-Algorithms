/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL)
        return 0;
        queue<TreeNode*> q;
        q.push(root);
        int count=0;
        while (q.size() > 0) {
            int n = q.size();
            vector<int> a;
            while (n--) {
                TreeNode* temp = q.front();
                q.pop();
                a.push_back(temp->val);
                if (temp->left != NULL)
                    q.push(temp->left);
                if (temp->right != NULL)
                    q.push(temp->right);
            }
            if (a.size() > 0)
                count++;
        }
        return count;
    }
};