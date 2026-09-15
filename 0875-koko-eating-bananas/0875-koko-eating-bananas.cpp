class Solution {
public:
    long long modi(long long mid, vector<int>& nums) {
        long long sum = 0, rem = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i] / mid;
            if (nums[i] % mid != 0)
                sum += 1;
        }

        return sum;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        long long i = 1;
        long long j = 1LL * (*max_element(piles.begin(), piles.end())) * h;
        while (i <= j) {
            long long mid = i + (j - i) / 2;
            if (modi(mid, piles) > h)
                i = mid + 1;
            else
                j = mid - 1;
        }
        return i;
    }
};