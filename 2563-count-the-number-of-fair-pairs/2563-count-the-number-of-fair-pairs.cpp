class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(begin(nums), end(nums));
        int i = 0;
        int j = nums.size() - 1;
        long long ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            int a =
                lower_bound(nums.begin() + i + 1, nums.end(), lower - nums[i]) -
                nums.begin() - 1 - i;
            int b = upper_bound(nums.begin() + i + 1, nums.end(), upper-nums[i]) -
                    nums.begin() - i - 1;
            ans += b - a;
        }
        return ans;
    }
};