class Solution {
public:
    const int MOD = 1e9 + 7;
    vector<int> dp;

    int solve(string& s, int k, int i) {
        if (i >= s.size())
            return 1;

        if (s[i] == '0')
            return 0;

        if (dp[i] != -1)
            return dp[i];

        long long ans = 0;
        long long num = 0;

        for (int j = i; j < s.size(); j++) {
            num = num * 10 + (s[j] - '0');

            if (num > k)
                break;

            ans = (ans + solve(s, k, j + 1)) % MOD;
        }

        return dp[i] = ans;
    }

    int numberOfArrays(string s, int k) {
        dp.resize(s.size(), -1);

        return solve(s, k, 0);
    }
};