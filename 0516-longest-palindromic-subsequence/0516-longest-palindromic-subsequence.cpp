class Solution {
public:
    int solve(string& s, string& s2, int i, int j,
              vector<vector<int>>& dp) {

        if (i >= s.size() || j >= s2.size())
            return 0;

        if (dp[i][j] != -1)
            return dp[i][j];

        if (s[i] == s2[j]) {
            return dp[i][j] =
                1 + solve(s, s2, i + 1, j + 1, dp);
        }

        return dp[i][j] = max(
            solve(s, s2, i + 1, j, dp),
            solve(s, s2, i, j + 1, dp)
        );
    }

    int longestPalindromeSubseq(string s) {
        string s2 = s;
        reverse(s2.begin(), s2.end());

        int n = s.size();

        vector<vector<int>> dp(n, vector<int>(n, -1));

        return solve(s, s2, 0, 0, dp);
    }
};