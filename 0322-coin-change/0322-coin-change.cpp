class Solution {
public:
    int solve(vector<int> &coins, int amount, vector<vector<int>>& dp, int i) {
        if (amount == 0)
            return 0;
        if (i == coins.size() || amount < 0)
            return INT_MAX-1;
        if (dp[i][amount] != -1)
            return dp[i][amount];
        int nottake = solve(coins, amount, dp, i + 1);
        int take = 1+solve(coins, amount - coins[i], dp, i);
        return dp[i][amount] = min(take, nottake);
    }

    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>> dp(coins.size() + 1, vector<int>(amount+ 1, -1));
        int ans = solve(coins, amount, dp, 0);
        if (ans == INT_MAX-1)
            return -1;
        return ans;
    }
};