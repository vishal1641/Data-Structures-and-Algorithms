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
    void solve(TreeNode* root, int targetSum, int currentSum, vector<int>& path,
               vector<vector<int>>& result) {
        // Base case: if root is NULL, return
        if (root == nullptr) {
            return;
        }

        // Add current node's value to current sum
        currentSum += root->val;
        path.push_back(root->val); // Add current node to the path

        // Check if it's a leaf node and if the current path sum equals
        // targetSum
        if (root->left == nullptr && root->right == nullptr &&
            currentSum == targetSum) {
            result.push_back(path); // Add the current path to the result
        }

        // Recursively explore left and right subtrees
        solve(root->left, targetSum, currentSum, path, result);
        solve(root->right, targetSum, currentSum, path, result);

        // Backtrack: remove current node from the path and subtract its value
        // from currentSum
        currentSum -= root->val;
        path.pop_back();
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> result;
        vector<int> path;
        int currentSum = 0;

        solve(root, targetSum, currentSum, path, result);

        return result;
    }
};