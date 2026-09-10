class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int i = 0, j = nums.size() - 1;
        while (i < j) {
            int mid = i + (j - i) / 2;

            if (nums[mid] == nums[mid + 1]) {
                if ((j - mid) % 2 == 0)
                    i = mid + 2;
                else
                    j = mid - 1;
            } else {
                if ((j - mid) % 2 == 0) {
                    if (nums[mid] == nums[mid - 1])
                        j = mid - 2;
                    else
                        return nums[mid];
                } else {
                    i = mid + 1;
                }
            }
        }
        return nums[j];
    }
};