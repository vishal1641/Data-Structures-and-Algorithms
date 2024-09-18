class Solution {
public:
    int lcs(string& s,string& r, int n, int m, vector<vector<int>>& dp) {
        if (n == 0 || m == 0)
            return 0;
        else if (dp[n][m] != -1)
            return dp[n][m];
        else if (s[n - 1] == r[m - 1])
            return dp[n][m] =1+ lcs(s, r, n - 1, m - 1, dp);
        else {
            return dp[n][m] =
                       max(lcs(s, r, n - 1, m, dp), lcs(s, r, n, m - 1, dp));
        }
    }
    string shortestCommonSupersequence(string str1, string str2) {
        int i = str1.size();
        int j = str2.size();
        if (i == 0)
            return str2;
        if (j == 0)
            return str1;
        vector<vector<int>> dp(i + 1, vector<int>(j + 1, -1));
        int x = lcs(str1, str2, i, j, dp);
        string v;
        while (i > 0 && j > 0) {
            if (str1[i - 1] == str2[j - 1]) {
                v.push_back(str1[i - 1]);
                i--;
                j--;
            } else {

                if (dp[i - 1][j] > dp[i][j - 1]) {
                    v.push_back(str1[i - 1]);
                    i--;
                } else {
                    v.push_back(str2[j - 1]);
                    j--;
                }
            }
        }

        while(i>0)
        {
            v.push_back(str1[i-1]);
            i--;
        }
         while(j>0)
        {
            v.push_back(str2[j-1]);
            j--;
        }
        reverse(begin(v),end(v));
        return v;
    }
};