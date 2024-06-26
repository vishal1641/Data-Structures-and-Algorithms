class Solution {
public:
    bool group(int mid, vector<int>& nums, int m) {
        int prev = nums[0];
        int count = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] - prev >= mid) {
                count++;
                prev = nums[i];
            }
            if (count == m)
                break;
        }
        return count == m;
    }
    int maxDistance(vector<int>& nums, int m) {
        int n = nums.size();
        sort(begin(nums), end(nums));
        int min = 1, max = nums[n - 1] - nums[0];
        int result = 0-1;
        while (min <= max) {
            int mid = min + (max - min) / 2;
            if (group(mid, nums, m)) {
                result = mid;
                min = mid + 1;
            } else {
                max = mid - 1;
            }
        }
        return result;
    }
};