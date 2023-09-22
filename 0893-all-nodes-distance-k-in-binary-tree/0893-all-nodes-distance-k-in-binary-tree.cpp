/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {

void mare(TreeNode* root,unordered_map<TreeNode*,TreeNode*>&pt,TreeNode*target){
queue<TreeNode*>q;
q.push(root);
while(!q.empty())
{
    TreeNode* current=q.front();
    q.pop();
    if(current->left)
    {
    pt[current->left]=current;
    q.push(current->left);
    }
    if(current->right)
    {
        pt[current->right]=current;
        q.push(current->right);
    }
}
}
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
      unordered_map<TreeNode*,TreeNode*>pt;
      mare(root,pt,target);
      unordered_map<TreeNode*,bool>tr; 
      queue<TreeNode*>que;
      que.push(target);
      tr[target]=true;
      int curle=0;
      while(!que.empty()){
          int size=que.size();
          if(curle++==k)
          break;
          for(int i=0;i<size;i++){
              TreeNode* p=que.front();
              que.pop();
              if(p->left&&!tr[p->left]){
                  que.push(p->left);
                  tr[p->left]=true;
              }
              if(p->right&&!tr[p->right]){
                  que.push(p->right);
                  tr[p->right]=true;
              }
              if(pt[p]&&!tr[pt[p]]){
                  que.push(pt[p]);
                  tr[pt[p]]=true;
              }
          }
      }
      vector<int>v;
      while(!que.empty()){
          TreeNode* curr=que.front();
          que.pop();
          v.push_back(curr->val);
      }

      return v;

    }
};