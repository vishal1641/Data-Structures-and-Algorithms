class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        int a = -1;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] <= nums[i + 1]) {
                count++;
            } else
                a = i;
        }
        if (count == nums.size() - 1)
            return true;
        else if (nums.size() - count == 2) {
           
            if (nums[nums.size()-1] <=nums[0])
                return true;
        }
        return false;
    }
};