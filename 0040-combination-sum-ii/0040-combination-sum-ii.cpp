class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int>& nums, vector<int>& temp, int target, int i,
               int sum) {
        if (sum == target) {
            ans.push_back(temp);
            return;
        }
        if (sum > target)
            return;
        if (i >= nums.size())
            return;
        for (int j = i; j < nums.size(); j++) {
            if(j>i&&nums[j]==nums[j-1])
            continue;
            sum += nums[j];
            temp.push_back(nums[j]);
            solve(nums, temp, target, j + 1, sum);
            sum -= nums[j];
            temp.pop_back();
            
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        vector<int> temp;
        int sum = 0;
        sort(begin(nums), end(nums));
        solve(nums, temp, target, 0, sum);
        return ans;
    }
};