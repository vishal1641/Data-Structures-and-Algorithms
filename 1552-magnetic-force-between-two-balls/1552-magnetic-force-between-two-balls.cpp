class Solution {
public:
    int maxDistance(vector<int>& nums, int m) {
        sort(begin(nums), end(nums));
        int i = 1, j = nums[nums.size() - 1] - nums[0];
        while (i <= j) {
            int mid = i + (j - i) / 2;
            int a = nums[0];
            int count = 1;
            for (int i = 1; i < nums.size(); i++) {
                if (nums[i] - a >= mid) {
                    count++;
                    a = nums[i];
                }
            }
            if (count >= m)
                i = mid + 1;
            else
                j = mid - 1;
        }
        return j;
    }
};