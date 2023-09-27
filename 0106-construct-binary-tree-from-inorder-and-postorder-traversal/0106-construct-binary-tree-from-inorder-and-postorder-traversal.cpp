// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
//     TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
//         if(inorder.size()!=postorder.size())
//         return NULL;
//         unordered_map<int,int>m;
//         for(int i=0;i<inorder.size();i++)
//         m[inorder[i]]=i;
        
//         return b(inorder,0,inorder.size()-1,postorder,0,postorder.size()-1,m);
        
//     }

    
//     TreeNode* b(vector<int>&inorder,int instart,int inend,vector<int>&postorder,int pstart,int pend,unordered_map<int,int>m){
//         if(pstart>pend||instart>inend)
//         return NULL;
//         TreeNode* root=new TreeNode(postorder[pend]);
//         int inroot=m[postorder[pend]];
//         int numsleft=inroot-instart;
//         root->left=b(inorder,instart,inroot-1,postorder,pstart,pstart+numsleft-1,m);
//         root->right=b(inorder,inroot+1,inend,postorder,pstart+numsleft,pend-1,m);
//         return root;
//     }
// };
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
    TreeNode* build(vector<int>&inorder, vector<int>&postorder, int is, int ie, int ps, int pe, unordered_map < int, int > &mp){
        if((ps > pe) || (is > ie))
            return NULL;
        
        int ind = mp[postorder[pe]];
        int nelem = ind - is;

        TreeNode* root = new TreeNode(postorder[pe]);
        root->left =  build(inorder, postorder,    is,  ind - 1, ps, ps + nelem - 1, mp);
        root->right = build(inorder, postorder, ind+1,  ie, ps + nelem, pe-1, mp);
        return root;
    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int postLen = postorder.size();
        int inLen = inorder.size();
        if(postLen != inLen)
            return NULL;

        unordered_map < int, int > mp;

        for(int i = 0; i < inLen; i++)
            mp[inorder[i]] = i;

        return build(inorder, postorder, 0, inLen - 1, 0, postLen - 1, mp);
    }
};