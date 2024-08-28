class Solution {
public:
    void solve(int i, vector<int>& nums, int target, vector<int>& ans,
               vector<vector<int>> &result, int sum) {
        if (sum > target)
            return;
        if (sum == target) {
            result.push_back(ans);
            return;
        }
        for (int j = i; j < nums.size(); j++) {
            if(j>i&&nums[j]==nums[j-1])
            continue;
            sum += nums[j];
            ans.push_back(nums[j]);
            solve(j + 1, nums, target, ans, result, sum);
            sum -= nums[j];
            ans.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        vector<int> ans;
        vector<vector<int>> result;
        sort(begin(nums),end(nums));

        int sum = 0;
        solve(0, nums, target, ans, result, sum);
        return result;
    }
};