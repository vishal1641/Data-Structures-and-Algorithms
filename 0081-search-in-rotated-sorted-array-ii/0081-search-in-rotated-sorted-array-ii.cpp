class Solution {
public:
    int modi(vector<int>& nums, int target, int i, int j) {
        while (i <= j) {
            int mid = i + (j - i) / 2;
            if (nums[mid] > target)
                j = mid - 1;
            else if (nums[mid] < target)
                i = mid + 1;
            else {
                return i;
            }
        }
        return -1;
    }
    int findpivot(vector<int>& nums, int target) {
        int i = 0, j = nums.size() - 1;
        int mid=0;
        while (i < j) {
            while (i < j && nums[i] == nums[i + 1]&&mid==0)
                i++;

            while (j > i && nums[j] == nums[j - 1]&&mid==0)
                j--;

             mid = i + (j - i) / 2;
            if (nums[mid] >=nums[j])
                i = mid + 1;
            else
                j = mid;
        }
        return j;
    }
    bool search(vector<int>& nums, int target) {
        int a = findpivot(nums, target);
        int b = modi(nums, target, 0, a-1);
        int c = modi(nums, target, a , nums.size() - 1);
        if (c != -1 || b != -1)
            return true;
        return false;
    }
};