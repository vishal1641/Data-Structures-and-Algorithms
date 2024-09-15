class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if (nums.size() == 1)
            return false;
        map<int, vector<int>> m;
        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]].push_back(i);
        }
        for (auto it : m) {
            int n = it.second.size();
            if (n == 1)
                continue;
            for (int i = 0; i < n - 1; i++) {
                if (abs(it.second[i] - it.second[i + 1]) <= k)
                    return true;
            }
        }
        return false;
    }
};