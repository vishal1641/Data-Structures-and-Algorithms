class Solution {
public:
    bool solve(vector<int>& nums, vector<int>& vis, int start,
               int k, int currSum, int target) {

        if (k == 1)
            return true;

        if (currSum == target)
            return solve(nums, vis, 0, k - 1, 0, target);

        for (int i = start; i < nums.size(); i++) {

            if (vis[i])
                continue;

            if (currSum + nums[i] > target)
                continue;

            vis[i] = 1;

            if (solve(nums, vis, i + 1, k, currSum + nums[i], target))
                return true;

            vis[i] = 0;
        }

        return false;
    }

    bool canPartitionKSubsets(vector<int>& nums, int k) {

        int sum = accumulate(nums.begin(), nums.end(), 0);

        if (sum % k != 0)
            return false;

        int target = sum / k;

        sort(nums.rbegin(), nums.rend());

        if (nums[0] > target)
            return false;

        vector<int> vis(nums.size(), 0);

        return solve(nums, vis, 0, k, 0, target);
    }
};