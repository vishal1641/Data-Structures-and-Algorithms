class Solution {
public:
    void solve(int i, vector<vector<int>>& ans, vector<int>& nums, int b,
               int sum, vector<int>& v) {
        if(sum>b)
        return;
        if (sum == b) {
            ans.push_back(v);
            return;
        }

        for (int j = i; j < nums.size(); j++) {
            v.push_back(nums[j]);
            sum += nums[j];
            solve(j, ans, nums, b, sum, v);
            v.pop_back();
            sum -= nums[j];
        }
    }
    vector<vector<int>> combinationSum(vector<int>& ARR, int B) {
        vector<vector<int>> ans;
        vector<int> v;
        int sum = 0;
        solve(0, ans, ARR, B, sum, v);
        return ans;
    }
};