class Solution {
public:
    int MOD = 1e9 + 7;

    int solve(int low, int high, int zero, int one, int length,
              vector<int>& dp) {

        if (length > high)
            return 0;

        if (dp[length] != -1)
            return dp[length];

        long long ans = 0;

        if (length >= low && length <= high)
            ans = 1;

        ans += solve(low, high, zero, one, length + zero, dp)+ solve(low, high, zero, one, length + one, dp);

        return dp[length] = ans % MOD;
    }

    int countGoodStrings(int low, int high, int zero, int one) {

        vector<int> dp(high + 1, -1);

        return solve(low, high, zero, one, 0, dp);
    }
};