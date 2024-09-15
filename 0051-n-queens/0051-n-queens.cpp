class Solution {
public:
   void solve(int col, vector<string>& board,
                                 vector<vector<string>>& ans, vector<int>& left,
                                 vector<int>& upper, vector<int>& lower,
                                 int n) {
        if (col == n) {
            ans.push_back(board);
            return;
        }
        for (int row = 0; row < n; row++) {
            if (left[row] == 0 && lower[row + col] == 0 &&
                upper[n - 1 + col - row] == 0) {
                board[row][col] = 'Q';
                left[row] = 1;
                upper[n - 1 + col - row] = 1;
                lower[col + row] = 1;
                solve(col + 1, board, ans, left, upper, lower,n);
                board[row][col] = '.';
                left[row] = 0;
                upper[n - 1 + col - row] = 0;
                lower[col + row] = 0;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board;
        string s(n, '.');
        for (int i = 0; i < n; i++) {
            board.push_back(s);
        }
        vector<int> left(n, 0), upper(2 * n - 1, 0), lower(2 * n - 1, 0);
        solve(0, board, ans, left, upper, lower, n);
        return ans;
    }
};