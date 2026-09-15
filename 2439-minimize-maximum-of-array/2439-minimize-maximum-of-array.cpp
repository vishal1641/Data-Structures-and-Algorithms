class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {

        int i = nums[0];
        int j = *max_element(nums.begin(), nums.end());

        while (i <= j) {

            int mid = i + (j - i) / 2;

            vector<long long> temp(nums.begin(), nums.end());

            for (int k = temp.size()-1; k >=1; k--) {

                if (temp[k] > mid) {

                    long long diff = temp[k] - mid;

                    temp[k] -= diff;
                    temp[k - 1] += diff;
                }
            }

            if (*max_element(temp.begin(), temp.end()) > mid)
                i = mid + 1;
            else
                j = mid - 1;
        }

        return i;
    }
};