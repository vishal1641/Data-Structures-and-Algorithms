class Solution {
public:
    int ans = 0;

    int solve(int n, int minProfit, vector<int>& group,
              vector<int>& profit, int i, int sum,
              vector<vector<vector<int>>>& dp) {

        sum = min(sum, minProfit);

        if (i >= profit.size()) {
            if (sum >= minProfit)
                return 1;
            return 0;
        }

        if (dp[n][i][sum] != -1)
            return dp[n][i][sum];

        int ans = 0;

        if (sum >= minProfit)
            ans++;

        for (int j = i; j < profit.size(); j++) {
            if (group[j] <= n) {

                sum += profit[j];

                ans += solve(n - group[j], minProfit,
                             group, profit, j + 1, sum, dp);

                ans %= 1000000007;

                sum -= profit[j];
            }
        }

        return dp[n][i][sum] = ans;
    }

    int profitableSchemes(int n, int minProfit,
                          vector<int>& group,
                          vector<int>& profit) {

        vector<vector<vector<int>>> dp(
            n + 1,
            vector<vector<int>>(
                group.size() + 1,
                vector<int>(minProfit + 1, -1)
            )
        );

        return solve(n, minProfit, group, profit, 0, 0, dp);
    }
};