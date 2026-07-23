class Solution {
public:
    vector<vector<int>> ans;

    void solve(vector<int>& temp, vector<int>& nums, int target, int sum, int i) {

        if (sum == target) {
            ans.push_back(temp);
            return;
        }

        if (i >= nums.size() || sum > target)
            return;

        temp.push_back(nums[i]);
        solve(temp, nums, target, sum + nums[i], i);

     
        temp.pop_back();

       
        solve(temp, nums, target, sum, i + 1);
    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {

        vector<int> temp;
        solve(temp, nums, target, 0, 0);

        return ans;
    }
};