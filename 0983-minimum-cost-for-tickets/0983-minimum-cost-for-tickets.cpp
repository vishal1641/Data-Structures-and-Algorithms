
class Solution {
public:
    int solve(vector<int>& nums, vector<int>& costs, int x,vector<int>&dp) {
        if (x >= nums.size())
            return 0;
        if (dp[x] != -1)
            return dp[x];
        int ans = INT_MAX;

        for (int j = 0; j < costs.size(); j++) {
            int k = x + 1;

            for (; k < nums.size(); k++) {
                if (j == 0) {
                    if (nums[k] >= nums[x] + 1)
                        break;
                } else if (j == 1) {
                    if (nums[k] >= nums[x] + 7)
                        break;
                } else {
                    if (nums[k] >= nums[x] + 30)
                        break;
                }
            }

            ans = min(ans, costs[j] + solve(nums, costs, k, dp));
        }

        return dp[x] = ans;
    }

    int mincostTickets(vector<int>& days, vector<int>& costs) {
        vector<int> dp(days.size() + 1, -1);
        return solve(days, costs, 0, dp);
    }
};
