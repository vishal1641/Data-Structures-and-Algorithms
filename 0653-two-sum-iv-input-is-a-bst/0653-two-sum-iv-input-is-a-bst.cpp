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
    void helper(vector<int> &nums,TreeNode *root){
        if(root==NULL){
            return ;
        }
        helper(nums,root->left);
        nums.push_back(root->val);
        helper(nums,root->right);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> nums;
        helper(nums,root);
        int i=0,j=nums.size()-1;
        while(i<j){
            int sum=nums[i]+nums[j];
            if(sum==k){
                return true;
            }
            else if(sum<k){
                i++;
            }
            else{
                j--;
            }
        }
        return false;
    }
};