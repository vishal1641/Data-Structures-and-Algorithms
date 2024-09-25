class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0)
            return 0;

        unordered_set<int> s(begin(nums), end(nums));
        int maxi = 0; // Initialized to 0, since the smallest length is 0

        for (int i = 0; i < nums.size(); i++) {
            // Only start counting if the current number is the beginning of a sequence
            if (s.find(nums[i] - 1) == s.end()) {
                int x = nums[i];
                int count = 1; // At least one number in the sequence

                // Count all consecutive numbers following x
                while (s.find(x + 1) != s.end()) {
                    count++;
                    x++;
                }

                // Update the maximum sequence length
                maxi = max(maxi, count);
            }
        }
        return maxi; // Return the longest sequence length
    }
};
