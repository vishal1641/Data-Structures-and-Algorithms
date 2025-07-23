class Solution {
public:
    void dfs(int i, vector<vector<int>>& a, vector<int>& v) {
        v[i] = 1;
        for (auto it : a[i]) {
            if (!v[it]) {
                dfs(it, a, v);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<vector<int>> a(isConnected.size());
        for (int i = 0; i < isConnected.size(); i++) {
            for (int j = 0; j < isConnected[0].size(); j++) {
                if (isConnected[i][j] == 1 && i != j) {
                    a[i].push_back(j);
                    a[j].push_back(i);
                }
            }
        }

        vector<int> v(isConnected.size(), 0);
        int count = 0;
        for (int i = 0; i < isConnected.size(); i++) {
            if (!v[i]) {
                count++;
                dfs(i, a, v);
            }
        }
        return count;
    }
};
