class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& nums) {

        unordered_map<int, vector<int>> m;

        for (int i = 0; i < nums.size(); i++) {
            m[nums[i][0]].push_back(nums[i][1]);
            m[nums[i][1]].push_back(nums[i][0]);
        }

        int start;

        for (auto it : m) {
            if (it.second.size() == 1) {
                start = it.first;
                break;
            }
        }

        vector<int> ans;
        ans.push_back(start);

        int n = nums.size() + 1;

        int prev = INT_MIN;
        int curr = start;

        while (ans.size() < n) {

            for (int i = 0; i < m[curr].size(); i++) {

                int next = m[curr][i];

                if (next != prev) {

                    ans.push_back(next);

                    prev = curr;
                    curr = next;

                    break;
                }
            }
        }

        return ans;
    }
};