class Solution {
public:
    int maxValue(int n, int index, int maxSum) {

        int i = 1, j = maxSum;

        while (i <= j) {

            int mid = i + (j - i) / 2;

            long long sum = 0;

            // LEFT + CENTER
            int mid1 = mid;

            if (index - (mid1 - 1) >= 0) {

                // mid, mid-1, ..., 1
                sum += 1LL * mid1 * (mid1 + 1) / 2;

                // remaining elements are 1
                sum += index - (mid1 - 1);
            }
            else {

                // mid, mid-1, ..., mid-index
                sum += 1LL * (mid1 + (mid1 - index)) * (index + 1) / 2;
            }

            // RIGHT
            mid1 = mid - 1;

            int right = n - index - 1;

            if (right - mid1 >= 0) {

               
                sum += 1LL * mid1 * (mid1 + 1) / 2;

                sum += right - mid1;
            }
            else {

             
                sum += 1LL * (mid1 + (mid1 - right + 1)) * right / 2;
            }

            if (sum > maxSum)
                j = mid - 1;
            else
                i = mid + 1;
        }

        return i - 1;
    }
};