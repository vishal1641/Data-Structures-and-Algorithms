class Solution {
public:
    vector<string> ans;
    void solve(string& digits, vector<string>& m, int i, string& z) {
        if (i >= digits.size()) {
            ans.push_back(z);
            return;
        }
        int n = digits[i] - '0';
        string k = m[n];
        for (int j = 0; j < k.size(); j++) {
            z.push_back(k[j]);
            solve(digits, m, i + 1, z);
            z.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> m(10);
        m = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        string z = "";
        solve(digits, m, 0, z);
        return ans;
    }
};