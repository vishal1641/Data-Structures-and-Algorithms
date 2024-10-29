class Solution {
public:
    vector<vector<int>> ans;
    void solve(int i, int k, int n, vector<int>& temp,int sum) {

        if (sum == n) {
            if (k == 0)
                ans.push_back(temp);
            
                return;
        }
        if (sum >n||k<0)
            return;
        if (i > 9)
            return;
        for (int j = i; j <= 9; j++) {
            sum += j;
            k--;
            temp.push_back(j);
            solve(j+ 1, k, n, temp,sum);
            sum -= j;
            k++;
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> temp;
        solve(1, k, n,temp,0);
        return ans;
    }
};