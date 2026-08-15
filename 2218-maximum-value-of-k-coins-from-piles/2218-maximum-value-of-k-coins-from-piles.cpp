class Solution {
public:
    int solve(vector<vector<int>>& piles, int k, int i,
              vector<vector<int>>& dp) {
        if (k == 0)
            return 0;

        if (i >= piles.size())
            return 0;

        int sum = 0;
        if (dp[i][k] != -1)
            return dp[i][k];
        int ans = solve(piles, k, i + 1, dp);
        for (int j = 0; j < piles[i].size() && j < k; j++) {
            sum += piles[i][j];

            ans = max(ans, sum + solve(piles, k - (j + 1), i + 1, dp));
        }

        return dp[i][k] = ans;
    }

    int maxValueOfCoins(vector<vector<int>>& piles, int k) {
        vector<vector<int>> dp(piles.size(), vector<int>(k + 1, -1));
        return solve(piles, k, 0, dp);
    }
};