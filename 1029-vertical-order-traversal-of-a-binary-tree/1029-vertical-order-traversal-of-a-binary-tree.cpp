class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {

        map<int, map<int, multiset<int>>> m;

        queue<pair<TreeNode*, pair<int, int>>> q;
        q.push({root, {0, 0}});

        while (!q.empty()) {
            auto it = q.front();
            q.pop();
            TreeNode* node = it.first;
            int x = it.second.first;
            int y = it.second.second;

            m[x][y].insert(node->val);

            if (node->left != NULL) {
                q.push({node->left, {x - 1, y + 1}});
            }
            if (node->right != NULL) {
                q.push({node->right, {x + 1, y + 1}});
            }
        }

        vector<vector<int>> ans;
        for (auto it : m) {
            vector<int> col;
            for (auto itt : it.second) {
                col.insert(col.end(), itt.second.begin(), itt.second.end());
            }
            ans.push_back(col);
        }

        return ans;
    }
};
