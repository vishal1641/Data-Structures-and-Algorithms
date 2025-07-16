class Solution {
public:
    vector<vector<int>> ans;
    void solve(int k, int n, vector<int>& temp, int i,int sum) {

        if (i > 10)
            return;
        if (sum == n) {
            if (k == 0)
                ans.push_back(temp);
                return ;
        }
        if(sum>n||k<0)
        return;
        temp.push_back(i);
        k = k - 1;
        sum += i;
        solve(k, n, temp, i + 1, sum);
        temp.pop_back();
        k = k + 1;
        sum -= i;
        solve(k, n, temp, i + 1, sum);
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> temp;
        solve(k, n, temp, 1, 0);
        return ans;
    }
};