class Solution {
public:
    vector<int> solveQueries(vector<int>& nums, vector<int>& q) {

        unordered_map<int, vector<int>> m;

        for (int i = 0; i < nums.size(); i++)
            m[nums[i]].push_back(i);

        vector<int> ans;

        int n = nums.size();

        for (int i = 0; i < q.size(); i++) {

            int x = nums[q[i]];

            if (m[x].size() == 1) {
                ans.push_back(-1);
                continue;
            }

            vector<int>& p = m[x];

            int pos = lower_bound(p.begin(), p.end(), q[i]) - p.begin();

            int prev = (pos == 0) ? p.back() : p[pos - 1];
            int next = (pos == p.size() - 1) ? p.front() : p[pos + 1];

            int d1 = abs(q[i] - prev);
            d1 = min(d1, n - d1);

            int d2 = abs(q[i] - next);
            d2 = min(d2, n - d2);

            ans.push_back(min(d1, d2));
        }

        return ans;
    }
};