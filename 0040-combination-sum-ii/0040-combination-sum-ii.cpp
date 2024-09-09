class Solution {
public:
    vector<vector<int>> ans;
    void solve(int i, vector<int>& nums, int& sum, int& target,
               vector<int>& temp) {
        if (sum == target) {
            ans.push_back(temp);
            return;
        }
        if (sum > target) {
            return;
        }

        for (int j = i; j < nums.size(); j++) {
            if(j>i&&nums[j]==nums[j-1])
            continue;
            sum += nums[j];
            temp.push_back(nums[j]);
            solve(j + 1, nums, sum, target, temp);
            sum -= nums[j];
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {

        vector<int> temp;
        int sum = 0;
         sort(begin(nums),end(nums));
        solve(0, nums, sum, target, temp);
       
        return ans;
    }
};