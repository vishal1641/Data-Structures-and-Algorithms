class Solution {
public:
    int n;
    vector<vector<int>> dp;

    int solve(vector<int>& nums, int i, int d) {

        if (d == 1)
            return *max_element(nums.begin() + i, nums.end());

        if (dp[i][d] != -1)
            return dp[i][d];

        int mx = 0;
        int ans = INT_MAX;

        for (int j = i; j <= n - d; j++) {

            mx = max(mx, nums[j]);

            ans = min(ans, mx + solve(nums, j + 1, d - 1));
        }

        return dp[i][d] = ans;
    }

    int minDifficulty(vector<int>& nums, int d) {

        n = nums.size();

        if (n < d)
            return -1;

        dp.assign(n, vector<int>(d + 1, -1));

        return solve(nums, 0, d);
    }
};