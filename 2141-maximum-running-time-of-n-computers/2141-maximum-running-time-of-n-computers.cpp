class Solution {
public:
    long long maxRunTime(int n, vector<int>& nums) {

        long long i = 1;
        long long j = accumulate(nums.begin(), nums.end(), 0LL);

        while (i <= j) {

            long long mid = i + (j - i) / 2;

            long long sum = 0;

            for (auto x : nums) {
                sum += min((long long)x, mid);
            }

            if (mid * n <= sum) {
                i = mid + 1;
            }
            else {
                j = mid - 1;
            }
        }

        return j;
    }
};