class Solution {
public:
    vector<vector<int>> ans;
    void solve(int i,int k, int n, vector<int>& temp, int& sum) {

        if (k == 0) {
            if (sum == n)
                ans.push_back(temp);
            return;
        }
        for (int j = i; j <= 9; j++) {
            sum +=j;
            k = k - 1;
            temp.push_back(j);
            solve(j + 1, k, n, temp, sum);
            sum -= j;
            k = k + 1;
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {

        vector<int> temp;
        int sum = 0;
        solve(1, k, n, temp, sum);
        return ans;
    }
};