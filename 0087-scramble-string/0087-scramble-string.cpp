class Solution {
public:
    unordered_map<string, bool> dp;
    bool solve(string s1, string s2) {
        if (s1 == s2)
            return true;

        if (s1.size() != s2.size())
            return false;

        int n = s1.size();
        string key = s1 + "_" + s2;
        if (dp.find(key) != dp.end())
            return dp[key];
        for (int i = 1; i < n; i++) {

            bool swapped = solve(s1.substr(0, i), s2.substr(n - i, i)) &&
                           solve(s1.substr(i), s2.substr(0, n - i));

            bool unswapped = solve(s1.substr(0, i), s2.substr(0, i)) &&
                             solve(s1.substr(i), s2.substr(i));

            if (swapped || unswapped)
                return dp[key] = true;
        }

        return dp[key] = false;
    }

    bool isScramble(string s1, string s2) { return solve(s1, s2); }
};