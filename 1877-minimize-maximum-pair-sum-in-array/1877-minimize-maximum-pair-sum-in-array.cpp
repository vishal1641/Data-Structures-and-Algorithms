class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(begin(nums), end(nums));
        int i = 0, j = nums.size() - 1;
        int maxi=INT_MIN;
        while (i <= j) {
            if (maxi < nums[i] + nums[j]) {
                maxi = nums[i] + nums[j];
            }
                j--;
                i++;
        }
        return maxi;
    }
};