class Solution {
public:
    long long solve(vector<vector<int>>& nums, int i, vector<long long>& dp) {

        if (i >= nums.size())
            return 0;
        if (dp[i] != -1)
            return dp[i];
        long long notake = solve(nums, i + 1, dp);
        long long take = nums[i][0] + solve(nums, i + nums[i][1] + 1, dp);
        return dp[i] = max(take, notake);
    }
    long long mostPoints(vector<vector<int>>& questions) {
        vector<long long> dp(questions.size() + 1, -1);
        return solve(questions, 0, dp);
    }
};