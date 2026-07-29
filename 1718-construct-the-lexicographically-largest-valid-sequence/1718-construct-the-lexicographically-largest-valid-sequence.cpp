class Solution {
public:
    bool solve(vector<int>& v, vector<int>& vis, int n, int idx) {

        while (idx < v.size() && v[idx] != 0)
            idx++;

        if (idx == v.size())
            return true;

        for (int num = n; num >= 1; num--) {

            if (vis[num])
                continue;

            if (num == 1) {

                v[idx] = 1;
                vis[1] = 1;

                if (solve(v, vis, n, idx + 1))
                    return true;

                v[idx] = 0;
                vis[1] = 0;
            }
            else {

                if (idx + num >= v.size() || v[idx + num] != 0)
                    continue;

                v[idx] = num;
                v[idx + num] = num;
                vis[num] = 1;

                if (solve(v, vis, n, idx + 1))
                    return true;

                v[idx] = 0;
                v[idx + num] = 0;
                vis[num] = 0;
            }
        }

        return false;
    }

    vector<int> constructDistancedSequence(int n) {

        vector<int> v(2 * n - 1, 0);
        vector<int> vis(n + 1, 0);

        solve(v, vis, n, 0);

        return v;
    }
};