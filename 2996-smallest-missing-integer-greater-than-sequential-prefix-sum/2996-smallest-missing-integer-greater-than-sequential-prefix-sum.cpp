class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum = nums[0];
        int maxi = 0;

        for (int i = 1; i <= nums.size() - 1; i++) {
            if (nums[i] == nums[i - 1] + 1) {
                sum += nums[i];

            } else {
                break;
            }
        }
        maxi = sum;
sort(begin(nums),end(nums));
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < maxi)
                continue;
            else if (nums[i] == maxi)
                maxi = maxi + 1;

            else
                break;
        }

        return maxi;
    }
};