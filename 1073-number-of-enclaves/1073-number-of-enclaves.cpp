class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> v(n, vector<int>(m, 0));
        queue<pair<int, int>> q;
        for (int i = 0; i < m; i++) {
            if (grid[0][i] == 1) {
                q.push({0, i});
                v[0][i] = 1;
            }
        }
        for (int i = 0; i < m; i++) {
            if (grid[n - 1][i] == 1) {
                q.push({n-1, i});
                v[n - 1][i] = 1;
            }
        }
        for (int i = 0; i < n; i++) {
            if (grid[i][0] == 1) {
                q.push({i, 0});
                v[i][0] = 1;
            }
        }
        for (int i = 0; i < n; i++) {
            if(grid[i][m-1]==1){
                q.push({i, m - 1});
                v[i][m - 1] = 1;
            }
        }
        int dx[] = {-1, 0, 1, 0};
        int dy[] = {0, -1, 0, 1};
        while (!q.empty()) {
            int r = q.front().first;
            int c = q.front().second;
            q.pop();
            for (int i = 0; i < 4; i++) {
                int nr = r + dx[i];
                int nc = c + dy[i];
                if (nr >= 0 && nr < n && nc >= 0 && nc < m && v[nr][nc] != 1 &&
                    grid[nr][nc] == 1) {
                    v[nr][nc] = 1;
                    q.push({nr, nc});
                }
            }
        }
        int count = 0;
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < m - 1; j++) {
                if (v[i][j] == 0 && grid[i][j] == 1)
                    count++;
            }
        }
        return count;
    }
};