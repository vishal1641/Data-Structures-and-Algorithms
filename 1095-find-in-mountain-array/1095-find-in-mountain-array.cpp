/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int searchl(int i, int j, int target, MountainArray& mountainArr) {

        int result = -1;
        while (i <=j) {
            int mid = i + (j - i) / 2;
            if (mountainArr.get(mid) == target) {
                result = mid;
                j = mid - 1;
            } else if (mountainArr.get(mid) > target)
                j = mid - 1;
            else
                i = mid + 1;
        }
        return result;
    }
    int searchr(int i, int j, int target, MountainArray& mountainArr) {
        int result = -1;
        while (i <= j) {
            int mid = i + (j - i) / 2;
            if (mountainArr.get(mid) == target) {
                result = mid;
                j = mid - 1;
            } else if (mountainArr.get(mid) > target)
                i = mid + 1;
            else
                j = mid - 1;
        }
        return result;
    }
    int findInMountainArray(int target, MountainArray& mountainArr) {
        int i = 0;
        int j = mountainArr.length() - 1;
        while (i < j) {
            int mid = i + (j - i) / 2;
            if (mountainArr.get(mid) < mountainArr.get(mid + 1))
                i = mid + 1;
            else
                j = mid;
        }
        int peak = j;
        int a = searchl(0, j, target, mountainArr);
        if (a != -1)
            return a;
        int b = searchr(j + 1, mountainArr.length() - 1, target, mountainArr);
        if (b != -1)
            return b;
        return -1;
    }
};