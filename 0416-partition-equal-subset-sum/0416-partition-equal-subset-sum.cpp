class Solution {
public:
    int solve(int i, int target, vector<int>& nums, vector<vector<int>>& dp) {
        if (target == 0)
            return dp[i][target] = true;
        if (target < 0 || i >= nums.size())
            return dp[i][target] = false;
        if (dp[i][target] != -1)
            return dp[i][target];
        if (nums[i] <= target) {
            return dp[i][target] = solve(i + 1, target - nums[i], nums, dp) ||
                                   solve(i + 1, target, nums, dp);
        } else
            return dp[i][target] = solve(i + 1, target, nums, dp);
    }
    bool canPartition(vector<int>& nums) {
        int sum = accumulate(begin(nums), end(nums), 0);
        if (sum % 2 != 0)
            return false;
        int target = sum / 2;
        vector<vector<int>> dp(nums.size() + 1, vector<int>(target + 1, -1));
        return solve(0, target, nums, dp);
    }
};