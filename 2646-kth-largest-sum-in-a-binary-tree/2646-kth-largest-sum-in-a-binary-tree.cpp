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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        queue<TreeNode*> q;
        q.push(root);
        
        vector<long long >v;
        while (!q.empty()) {
            long long sum = 0;
            int n=q.size();
            while (n--) {
                TreeNode* temp = q.front();
                q.pop();
                sum += (long long)temp->val;
            
                if (temp->left)
                    q.push(temp->left);
                if (temp->right)
                    q.push(temp->right);
            }
           v.push_back(sum);
        }
        sort(begin(v),end(v),greater<long long>());
        if(k>v.size())
        return -1;
        return v[k-1];
    }
};