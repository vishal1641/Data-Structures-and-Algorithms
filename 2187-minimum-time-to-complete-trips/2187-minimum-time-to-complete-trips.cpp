class Solution {
public:
    long long modi(long long mid, vector<int>& nums) {
        long long sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            sum += mid / nums[i];
        }

        return sum;
    }

    long long minimumTime(vector<int>& nums, int totalTrips) {

        long long i = 1;
        long long j = 1LL * (*min_element(nums.begin(), nums.end())) * totalTrips;

        while (i <= j) {

            long long mid = i + (j - i) / 2;

            if (modi(mid, nums) < totalTrips)
                i = mid + 1;
            else
                j = mid - 1;
        }

        return i;
    }
};