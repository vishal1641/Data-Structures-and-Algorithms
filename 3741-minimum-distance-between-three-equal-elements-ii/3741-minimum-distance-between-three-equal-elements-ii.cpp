class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        map<int, vector<int>> m;
        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]].push_back(i);
        }
        int mini = INT_MAX;
        for (auto it : m) {
            if (it.second.size() < 3)
                continue;
            else if (it.second.size() >= 3) {
                for (int i = 0; i < it.second.size() - 2; i++) {
                    int ans = 0;
                    ans += 2 * abs(it.second[i] - it.second[i + 2]);
                    mini = min(mini, ans);
                }
            }
        }
        return mini != INT_MAX ? mini : -1;
    }
};