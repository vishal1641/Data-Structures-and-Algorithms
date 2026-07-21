class Solution {
public:
    int numRabbits(vector<int>& nums) {
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]]++;
        }
        int ans = 0;
        for (auto it : m) {
            if (it.first == 0)
                ans += it.second;
            else if (it.first == 1) {
                int x = it.second / 2;
                int y = it.second % 2;
                ans += x * 2 + y * 2;
            }

             else {
                int group = it.first + 1;

                if (it.second <= group) {
                    ans += group;
                } else {
                    int x = it.second / group;
                    int y = it.second % group;

                    ans += x * group;
                    if (y != 0)
                        ans += group;
                }
            }
        }
        return ans;
    }
};