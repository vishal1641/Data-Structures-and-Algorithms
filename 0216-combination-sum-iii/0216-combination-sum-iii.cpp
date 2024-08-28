class Solution {
public:
    void solve(int i, int k, int n, vector<vector<int>>& ans,
               vector<int>& temp,int sum) {

        if (k == 0) {
            if (sum == n)
                ans.push_back(temp);
            return;
        }
        if (sum >= n)
            return;

        for (int j = i; j <= 9; j++) {
            sum += j;
            temp.push_back(j);
            solve(j + 1, k - 1, n, ans,temp,sum);
            sum -= j;
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> temp;
        int sum=0;
        solve(1, k, n, ans,temp,sum);
        return ans;
    }
};