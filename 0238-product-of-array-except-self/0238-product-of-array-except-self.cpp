class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int x = 1;
        int count=0;
        int i=0;
        for (i = 0; i < nums.size(); i++) {
            if (nums[i] != 0)
                x = x * nums[i];
            else {
                count++;
                continue;
            }
        }
        if (count > 1) {
            vector<int> k(nums.size(), 0);
            return k;
        } else if (count == 0) {
            for (int i = 0; i < nums.size(); i++) {
                nums[i] = x / nums[i];
            }
        } else {
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] != 0)
                    nums[i] = 0;
                else
                    nums[i] = x;
            }
        }
        return nums;
    }
};