class Solution {
public:
    int solve(int amount, vector<int>& coins, vector<vector<int>>& dp, int n) {

        if (amount == 0)
            return 1;
        if (n == 0) {
            if (amount == 0)
                return 1;
            else
                return 0;
        }
        if (dp[n][amount] != -1)
            return dp[n][amount];
        if (coins[n - 1] <= amount) {
            return dp[n][amount] =
                       solve(amount - coins[n - 1], coins, dp, n ) +
                       solve(amount, coins, dp, n - 1);
        } else {
            return dp[n][amount] = solve(amount, coins, dp, n - 1);
        }
    }
    int change(int amount, vector<int>& coins) {
        vector<vector<int>> dp(coins.size() + 1, vector<int>(amount + 1, -1));
        int n = coins.size();
        return solve(amount, coins, dp, n);
    }
};