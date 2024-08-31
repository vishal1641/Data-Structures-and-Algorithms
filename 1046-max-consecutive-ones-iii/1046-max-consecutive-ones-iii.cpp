class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i = 0;
        int j = 0;
        int maxi = 0;
        int count = 0;
        int x=0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0)
                x++;
        }
        if (x < k)
            return nums.size();
        while (j < nums.size()) {
            if (nums[j] == 0)
                count++;
            if (count < k)
                j++;
            else if (count == k) {
                maxi = max(maxi, j - i + 1);
                j++;
            } else {
                while (count > k) {
                    if (nums[i] == 0)
                        count--;
                    i++;
                }
                j++;
            }
        }

        return maxi;
    }
};