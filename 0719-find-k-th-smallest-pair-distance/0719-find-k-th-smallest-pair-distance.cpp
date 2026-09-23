class Solution {
public:
    int slide(vector<int>& nums, int k) {
        int i = 0;
        int cp = 0;

        for (int j = 0; j < nums.size(); j++) {

            while (nums[j] - nums[i] > k)
                i++;

            cp += j - i;
        }

        return cp;
    }

    int smallestDistancePair(vector<int>& nums, int k) {
        sort(begin(nums), end(nums));

        int i = 0;
        int j = nums[nums.size() - 1] - nums[0];

        while (i <= j) {
            int mid = i + (j - i) / 2;

            int count = slide(nums, mid);

            if (count < k) {
                // not enough pairs
                i = mid + 1;
            }
            else {
                // enough pairs, try smaller distance
                j = mid - 1;
            }
        }

        return i;
    }
};