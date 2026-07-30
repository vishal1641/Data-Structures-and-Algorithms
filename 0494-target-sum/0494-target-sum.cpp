class Solution {
public:
    int ans = 0;

    void solve(vector<int>& nums, int& target, int i, int& sum) {

        if (i == nums.size()) {
            if (sum == target)
                ans++;
            return;
        }
       

        sum += nums[i];
        solve(nums, target, i + 1, sum);
        sum -= nums[i];
        sum -= nums[i];
        solve(nums, target, i + 1, sum);
        sum += nums[i];
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum = 0;
        solve(nums, target, 0, sum);
        return ans;
    }
};