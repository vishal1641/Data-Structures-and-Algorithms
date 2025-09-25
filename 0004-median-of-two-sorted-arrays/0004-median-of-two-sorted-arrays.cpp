class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int b = (n1 + n2) / 2;
        int a = b - 1;
        int i = 0, j = 0;
        int count = 0;
        double ans1 = -1, ans2 = -1;
        while (i < n1 && j < n2) {
            if (nums1[i] < nums2[j]) {
                if (count == a)
                    ans1 = nums1[i];
                if (count == b)
                    ans2 = nums1[i];
                count++;
                i++;
            } else {
                if (count == a)
                    ans1 = nums2[j];
                if (count == b)
                    ans2 = nums2[j];
                count++;
                j++;
            }
        }
        while (i < n1) {
            if (count == a)
                ans1 = nums1[i];
            if (count == b)
                ans2 = nums1[i];
            count++;
            i++;
        }
        while (j < n2) {
            if (count == a)
                ans1 = nums2[j];
            if (count == b)
                ans2 = nums2[j];
            count++;
            j++;
        }
        if ((n1 + n2) % 2 == 0)
            return (ans1 + ans2) / 2;
        else
            return ans2;
    }
};