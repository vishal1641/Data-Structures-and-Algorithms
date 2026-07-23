class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int>& nums, int target, int i, vector<int>& temp) {

        if (target < 0 || i > nums.size())
            return;
        if (target == 0) {
            ans.push_back(temp);
            return;
        }

        for (int j = i; j < nums.size(); j++) {
            if (j > i && nums[j - 1] == nums[j])
                continue;
            temp.push_back(nums[j]);
            solve(nums, target - nums[j], j + 1, temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        sort(begin(nums), end(nums));
        vector<int> temp;
        solve(nums, target, 0, temp);
        return ans;
    }
};