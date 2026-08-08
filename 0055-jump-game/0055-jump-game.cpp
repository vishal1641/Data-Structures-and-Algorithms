class Solution {
public:
    bool solve(vector<int>& nums, int i, vector<int>& dp) {

        if (i >= nums.size() - 1)
            return true;
        if (nums[i] == 0)
            return false;
        if (dp[i] != -1)
            return dp[i];
        bool take = false;
        for (int j = 1; j <= nums[i]; j++) {
            take = solve(nums, i + j, dp);
            if (take == true)
                return dp[i] = true;
        }
        return dp[i] = take;
    }
    bool canJump(vector<int>& nums) {
        vector<int> dp(nums.size() + 1,-1);
        return solve(nums, 0,dp);
    }
};