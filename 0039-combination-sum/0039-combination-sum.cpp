class Solution {
public:
    vector<vector<int>> v;
    void solve(vector<int>& nums, int target, int i, int sum, vector<int>& temp) {
        if (sum > target)
            return;
        if (sum == target) {
            v.push_back(temp);
            return;
        }
        if (i >= nums.size())
            return;
        for (int j = i; j < nums.size(); j++) {
            sum += nums[j];
            temp.push_back(nums[j]);
            solve(nums, target, j, sum, temp);
            sum -= nums[j];
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        int i = 0;
        vector<int> temp;
        solve(nums, target, i, 0, temp);
        return v;
    }
};