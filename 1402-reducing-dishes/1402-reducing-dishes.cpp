class Solution {
public:
    int solve(vector<int>& nums, int i, int m, vector<vector<int>>& dp) {
        if (i >= nums.size())
            return 0;
        if (dp[i][m] != -1)
            return dp[i][m];
        int take = nums[i] * m + solve(nums, i + 1, m + 1, dp);
        int notake = solve(nums, i + 1, m, dp);
        return dp[i][m] = max(take, notake);
    }
    int maxSatisfaction(vector<int>& nums) {
        sort(begin(nums), end(nums));
        vector<vector<int>> dp(nums.size() + 1,
                               vector<int>(nums.size() + 1, -1));
        return solve(nums, 0, 1, dp);
    }
};