class Solution {
public:
    int solve(string text1, string text2, int n1, int n2,
              vector<vector<int>>& dp) {
        int a = 0, b = 0;
        if (n1 == 0 || n2 == 0)
            return 0;
        if (dp[n1][n2] != -1)
            return dp[n1][n2];
        if (text1[n1 - 1] == text2[n2 - 1]) {
            return dp[n1][n2] = 1 + solve(text1, text2, n1 - 1, n2 - 1, dp);
        }
       return dp[n1][n2] = max(solve(text1, text2, n1 - 1, n2, dp),
                         solve(text1, text2, n1, n2 - 1, dp));
    }
    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>> dp(text1.size() + 1,
                               vector<int>(text2.size() + 1, -1));
        int n1 = text1.size(), n2 = text2.size();
        return solve(text1, text2, n1, n2, dp);
    }
};