class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(begin(nums), end(nums));
        long long ls = nums[0];
        long long count = 1;
        long long maxi = INT_MIN;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] - 1 == ls) {
                ls = nums[i];
                count++;
            } else if (nums[i] - 1 != ls) {
                ls = nums[i];
            maxi = max(maxi, count);
                count = 1;
            }
        }
maxi=max(maxi,count);
        return maxi;
    }
};