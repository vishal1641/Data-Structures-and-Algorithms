class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int window = 2 * k + 1;

        vector<int> v(nums.size(), -1);

        if (window > nums.size())
            return v;

        int i = 0, j = 0;
        long long sum = 0;

        while (j < nums.size()) {
            sum += nums[j];

            if (j - i + 1 < window) {
                j++;
            }

            else if (j - i + 1 == window) {
                v[i + k] = sum / (j-i+1);

                sum -= nums[i];
                i++;
                j++;
            }
        }

        return v;
    }
};