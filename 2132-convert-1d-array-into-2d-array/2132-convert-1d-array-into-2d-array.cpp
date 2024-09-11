class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> ans(m);
        if (m * n != original.size())
            return {};
        int x = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                ans[i].push_back(original[x]);
                x++;
            }
        }
        return ans;
    }
};