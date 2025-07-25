
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        queue<pair<pair<int, int>, int>> q;
        vector<vector<int>> vis(n, vector<int>(m, 0));

     
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 2) {
                    q.push({{i, j}, 0});
                    vis[i][j] = 2;
                }
            }
        }

        int maxi = 0;
        int dx[] = {-1, 0, 1, 0};
        int dy[] = {0, 1, 0, -1};

        while (!q.empty()) {
            int a = q.front().first.first;
            int b = q.front().first.second;
            int t = q.front().second;
            q.pop();

            maxi = max(maxi, t);

            for (int i = 0; i < 4; i++) {
                int nr = a + dx[i];
                int nc = b + dy[i];
                if (nr >= 0 && nr < n && nc >= 0 && nc < m &&
                    grid[nr][nc] == 1 && vis[nr][nc] != 2) {
                    vis[nr][nc] = 2;
                    q.push({{nr, nc}, t + 1});
                }
            }
        }

       
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1 && vis[i][j] != 2)
                    return -1;
            }
        }

        return maxi;
    }
};
