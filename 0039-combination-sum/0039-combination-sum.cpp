
class Solution {
public:
    vector<vector<int>> ans;
    void solve(int i, vector<int>& temp, int target, int& sum,
               vector<int>& nums) {

        if (sum > target)
            return;
        if (sum == target) {
            ans.push_back(temp);
            return;
        }

        for (int j = i; j < nums.size(); j++) {
            sum += nums[j];
            temp.push_back(nums[j]);
            solve(j, temp, target, sum, nums);
            sum -= nums[j];
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {

        vector<int> temp;
        int sum = 0;
        solve(0, temp, target, sum, nums);
        return ans;
    }
};