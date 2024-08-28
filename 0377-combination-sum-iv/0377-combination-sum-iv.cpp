class Solution {
public:
    int solve(int sum, int target, vector<int>& nums, vector<int>& dp) {
        if (sum == target) {
            return 1; 
        }
        if (sum > target) {
            return 0; 
        }

        if (dp[sum] != -1) {
            return dp[sum]; 
        }

        int ans = 0;
        for (int j = 0; j < nums.size(); j++) {
            sum+=nums[j];
            ans += solve(sum , target, nums, dp); 
            sum-=nums[j];
        }

        dp[sum] = ans; 
        return ans;
    }

    int combinationSum4(vector<int>& nums, int target) {
        vector<int> dp(target + 1, -1); 
        return solve(0, target, nums, dp); 
    }
};
