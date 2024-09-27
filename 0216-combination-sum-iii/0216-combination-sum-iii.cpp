class Solution {
public:
    vector<vector<int>> ans;
    void solve(int i, int x, int k, int n, vector<int>& temp, int sum) {
        if (sum > n || x > k)
            return;
        if (x == k) {
            if (sum == n)
                ans.push_back(temp);
            return;
        }
        if (i >9)
            return;
        for (int j = i; j <= 9; j++) {
            sum += j;
            x += 1;
            temp.push_back(j);
            solve(j + 1, x, k, n, temp, sum);
            sum -= j;
            x -= 1;
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> temp;
        int sum = 0;
        solve(1, 0, k, n, temp, sum);
        return ans;
    }
};