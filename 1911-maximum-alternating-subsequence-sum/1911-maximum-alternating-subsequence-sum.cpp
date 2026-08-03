class Solution {
public:
    long long solve(vector<int>& nums, int i, bool iseven,
              vector<vector<long long>>& dp) {
        if (i >= nums.size()) {
            return 0;
        }
        if (dp[i][iseven] != -1)
            return dp[i][iseven];
        int val = nums[i];
        if (iseven != true) {
            val = -1 * val;
        }
        long long take = val + solve(nums, i + 1, !iseven, dp);
        long long notake = solve(nums, i + 1, iseven, dp);
        return dp[i][iseven] = max(take, notake);
    }
    long long maxAlternatingSum(vector<int>& nums) {
        bool iseven = true;
        vector<vector<long long>> dp(nums.size() + 1, vector<long long>(2, -1));
        return solve(nums, 0, iseven, dp);
    }
};