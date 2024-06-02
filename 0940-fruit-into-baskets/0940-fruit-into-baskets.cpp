class Solution {
public:
    int totalFruit(vector<int>& nums) {
        int i = 0, j = 0;
        unordered_map<int, int> m;
int maxi=0;
        while (j < nums.size()) {
            m[nums[j]]++;
            if (m.size() <= 2) {
                maxi = max(maxi, j - i + 1);
                j++;
            } else {
                while (m.size() > 2) {
                    m[nums[i]]--;
                    if (m[nums[i]] == 0)
                        m.erase(nums[i]);
                i++;
                }
                j++;
            }
        }
        return maxi;
    }
};