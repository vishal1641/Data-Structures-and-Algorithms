class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int, int> m1;
        int count = 0;

        // Count occurrences of each number in nums
        for (int num : nums) {
            m1[num]++;
        }

        // Count unique pairs with the difference of k
        for (auto it : m1) {
            if (k == 0) {
                // For k == 0, we need duplicates, so count elements with frequency > 1
                if (it.second > 1) {
                    count++;
                }
            } else {
                // For k > 0, check if there exists a pair (num, num + k)
                if (m1.find(it.first + k) != m1.end()) {
                    count++;
                }
            }
        }

        return count;
    }
};
