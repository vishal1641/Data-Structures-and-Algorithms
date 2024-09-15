class Solution {
public:
    bool solve(int i, int j, int m, int n, vector<vector<int>>& grid,
               int health, vector<vector<bool>>& visited,
               vector<vector<vector<int>>>& dp) {
        if (i < 0 || i >= m || j < 0 || j >= n || health <= 0 ||
            visited[i][j] == true)
            return false;
        health = health - grid[i][j];
        if (health <= 0)
            return dp[i][j][health] = false;
        if (dp[i][j][health] != -1)
            return dp[i][j][health];
        visited[i][j] = true;
        if (i == m - 1 && j == n - 1 && health >= 1)
            return true;
        int a = solve(i + 1, j, m, n, grid, health, visited, dp);
        int b = solve(i - 1, j, m, n, grid, health, visited, dp);
        int c = solve(i, j + 1, m, n, grid, health, visited, dp);
        int d = solve(i, j - 1, m, n, grid, health, visited, dp);
        visited[i][j] = false;
        return dp[i][j][health] = a || b || c || d;
    }

    bool findSafeWalk(vector<vector<int>>& grid, int health) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        vector<vector<vector<int>>> dp(
            m, vector<vector<int>>(n, vector<int>(health+1, -1)));
        bool ans = solve(0, 0, m, n, grid, health, visited, dp);
        return ans;
    }
};