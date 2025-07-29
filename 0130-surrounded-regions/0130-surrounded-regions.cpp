class Solution {
public:
    void dfs(int r, int c, vector<vector<int>>& vis, vector<vector<char>>& board, int dx[], int dy[]) {
        vis[r][c] = 1;
        int n = board.size();
        int m = board[0].size();
        for (int i = 0; i < 4; i++) {
            int nrow = r + dx[i];
            int ncol = c + dy[i];
            if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && !vis[nrow][ncol] && board[nrow][ncol] == 'O') {
                dfs(nrow, ncol, vis, board, dx, dy);
            }
        }
    }

    void solve(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        if (n == 0 || m == 0) return;

        vector<vector<int>> vis(n, vector<int>(m, 0));
        int dx[] = {-1, 0, 1, 0};
        int dy[] = {0, 1, 0, -1};

        
        for (int j = 0; j < m; j++) {
            if (!vis[0][j] && board[0][j] == 'O')
                dfs(0, j, vis, board, dx, dy);
            if (!vis[n-1][j] && board[n-1][j] == 'O')
                dfs(n-1, j, vis, board, dx, dy);
        }

    
        for (int i = 0; i < n; i++) {
            if (!vis[i][0] && board[i][0] == 'O')
                dfs(i, 0, vis, board, dx, dy);
            if (!vis[i][m-1] && board[i][m-1] == 'O')
                dfs(i, m-1, vis, board, dx, dy);
        }

       
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!vis[i][j] && board[i][j] == 'O') {
                    board[i][j] = 'X';
                }
            }
        }
    }
};
