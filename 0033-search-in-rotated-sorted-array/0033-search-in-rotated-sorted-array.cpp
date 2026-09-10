class Solution {
public:
    int binarysearch(int i, int j, vector<int>& nums, int target) {

        while (i <= j) {
            int mid = i + (j - i) / 2;
            if (nums[mid] < target)
                i = mid + 1;
            else if (nums[mid] > target)
                j = mid - 1;
            else
                return mid;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int i = 0;
        int j = nums.size() - 1;
        while (i < j) {
            int mid = i + (j - i) / 2;
            if (nums[mid] >= nums[j])
                i = mid + 1;
            else {
                j = mid;
            }
        }
     int ans=i;
        int x = binarysearch(ans, nums.size() - 1, nums, target);
        if (x != -1)
            return x;
        int y = binarysearch(0, ans - 1, nums, target);
        if (y != -1)
            return y;
        return -1;
    }
};