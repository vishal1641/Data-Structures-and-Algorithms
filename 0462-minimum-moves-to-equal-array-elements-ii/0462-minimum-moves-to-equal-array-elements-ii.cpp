class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(begin(nums), end(nums));
        int mini = INT_MAX, sum = 0;
        if (nums.size() % 2 == 0) {
            int a = nums.size() / 2;
            int b = nums.size() / 2 - 1;
            for (int i = b; i <= a; i++) {
                for (int j = 0; j < nums.size(); j++) {
                    sum += abs(nums[j] - nums[i]);
                }

                mini = min(sum, mini);
                sum=0;
            }
        } else {
            for (int j = 0; j < nums.size(); j++) {
                sum += abs(nums[j] - nums[nums.size() / 2]);
            }
            mini = min(mini, sum);
            sum=0;
        }
        return mini;
    }
};