class Solution {
public:
    int solve(int k, vector<int>& nums, int i, vector<vector<int>>& dp) {
        if (i >= nums.size() || k == 0)
            return 0;
        if (dp[i][k] != -1)
            return dp[i][k];
        int take = 0;
        for (int j = i + 1; j < nums.size(); j++) {

            if (nums[j] >= nums[i]) {
                take = max(take,
                           nums[j] - nums[i] + solve(k - 1, nums, j + 1, dp));
            }
        }
        int notake = solve(k, nums, i + 1, dp);
        return dp[i][k] = max(take, notake);
    }
    int maxProfit(int k, vector<int>& prices) {
        vector<vector<int>> dp(prices.size() + 1, vector<int>(k + 1, -1));
        return solve(k, prices, 0,dp);
    }
};