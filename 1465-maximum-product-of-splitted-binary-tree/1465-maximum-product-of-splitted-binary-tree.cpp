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
    long long sum=0;
    long long ans=0;
public:
void sumo(TreeNode*root){
    if(root==NULL)
    return ;
    sum+=root->val;
    sumo(root->left);
    sumo(root->right);
}
int sumo2(TreeNode*root){
    if(root==NULL)
    return 0;
    long long a=sumo2(root->left);
    long long b=sumo2(root->right);
    ans=max(ans,(sum-a)*a);
    ans=max(ans,(sum-b)*b);
    return root->val+a+b;
}
    int maxProduct(TreeNode* root) {
        sumo(root);
        sumo2(root);
        int mod=1000000007;
        return ans%mod;
    }
};