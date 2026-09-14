class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {

        int n = arr.size();

        int x = arr[n - 1];

        if (k > x - n)
            return x + (k - (x - n));

        int i = 0, j = n - 1;

        while (i < j) {

            int mid = i + (j - i) / 2;

            if (arr[mid] - (mid + 1) < k)
                i = mid + 1;
            else
                j = mid;
        }

        int missingBefore = arr[i] - (i + 1);

        return arr[i] - (missingBefore - k + 1);
    }
};