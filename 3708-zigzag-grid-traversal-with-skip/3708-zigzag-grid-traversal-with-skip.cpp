class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& grid) {
        vector<int> v;
        for (int i = 0; i < grid.size(); i++) {
            if (i % 2 == 0) {
                for (int j = 0; j < grid[i].size(); j++) {
                    v.push_back(grid[i][j]);
                }
            } else {
                for (int k = grid[i].size() - 1; k >= 0; k--) {
                    v.push_back(grid[i][k]);
                }
            }
        }
        vector<int> m;
        for (int i = 0; i < v.size(); i++) {
            if (i % 2 == 0)
                m.push_back(v[i]);
        }
        return m;
    }
};