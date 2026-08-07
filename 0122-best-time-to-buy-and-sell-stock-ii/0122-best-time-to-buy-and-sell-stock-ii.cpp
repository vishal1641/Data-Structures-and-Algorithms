class Solution {
public:
    long solve(vector<int>& nums, int i, int buy, vector<vector<long>>& dp) {
        if (i >= nums.size())
            return 0;

        if (dp[i][buy] != -1)
            return dp[i][buy];

        long profit = 0;

        if (buy == 1) {
            profit = max(-nums[i] + solve(nums, i + 1, 0, dp),
                         solve(nums, i + 1, 1, dp));
        }

        if (buy == 0) {
            profit = max(nums[i] + solve(nums, i + 1, 1, dp),
                         solve(nums, i + 1, 0, dp));
        }

        return dp[i][buy] = profit;
    }

    int maxProfit(vector<int>& prices) {
        vector<vector<long>> dp(prices.size(), vector<long>(2, -1));
        return solve(prices, 0, 1, dp);
    }
};