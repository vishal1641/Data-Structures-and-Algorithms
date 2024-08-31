class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        
        sort(nums.begin(), nums.end());
        
        int ls = nums[0];
        int count = 1;
        int maxi = 1;
        
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                continue;
            }
            if (nums[i] - 1 == ls) {
                ls = nums[i];
                count++;
            } else {
                ls = nums[i];
                maxi = max(maxi, count);
                count = 1;
            }
        }
        maxi = max(maxi, count);
        return maxi;
    }
};
