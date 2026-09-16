class Solution {
public:
    long long minCost(vector<int>& nums, vector<int>& cost) {

        int i = *min_element(nums.begin(), nums.end());
        int j = *max_element(nums.begin(), nums.end());

        long long mini = LLONG_MAX;

        while (i <= j) {

            int mid = i + (j - i) / 2;

            long long sum = 0;

            for (int k = 0; k < nums.size(); k++) {
                sum += 1LL * abs(mid - nums[k]) * cost[k];
            }

            mini = min(mini, sum);

            // calculate cost at mid + 1
            long long sum2 = 0;

            for (int k = 0; k < nums.size(); k++) {
                sum2 += 1LL * abs(mid + 1 - nums[k]) * cost[k];
            }

            if (sum > sum2)
                i = mid + 1;
            else
                j = mid - 1;
        }

        return mini;
    }
};