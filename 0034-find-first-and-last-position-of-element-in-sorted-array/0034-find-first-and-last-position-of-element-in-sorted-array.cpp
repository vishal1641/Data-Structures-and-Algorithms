class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        int ans = 0-1;
        int ans2 = 0-1;
        while (low <= high) {
        int mid = (low + high) / 2;
            if (nums[mid] >= target) {
                high = mid - 1;

            } else {
                low = mid + 1;
            }
            if (nums[mid] == target)
                ans = mid;
        }
         low=0,high=nums.size()-1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] <= target) {
                low = mid +1 ;
            } else {
                high= mid -1;
            }
            if (nums[mid] == target)
                ans2 = mid;
        }
        return {ans, ans2};
    }
};