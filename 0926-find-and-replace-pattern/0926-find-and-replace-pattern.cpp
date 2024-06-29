class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& nums, string pattern) {
        vector<string> ans;
        for (int i = 0; i < nums.size(); i++) {
            map<char, char> m;

            int count = 0;
            map<char, char> m1;
            for (int j = 0; j < pattern.size(); j++) {
                if (m.find(pattern[j]) == m.end() &&
                    m1.find(nums[i][j]) == m1.end()) {
                    m[pattern[j]] = nums[i][j];
                    m1[nums[i][j]] = pattern[j];
                } else {
                    if (m[pattern[j]] != nums[i][j]) {
                        count = 1;
                        break;
                    }
                    if (m1[nums[i][j]] != pattern[j]) {
                        count = 1;
                        break;
                    }
                }
            }
            if (count == 0)
                ans.push_back(nums[i]);
        }
        return ans;
    }
};