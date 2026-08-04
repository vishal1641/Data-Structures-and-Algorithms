class Solution {
public:
    int maxi = 0;
    void solve(vector<string>& arr, int i, map<char, int>& m) {
        if (i >= arr.size()) {
            maxi = max(maxi, (int)m.size());
            return;
        }
        int count = 0;
        for (int j = 0; j < arr[i].size(); j++) {
            if (m.find(arr[i][j]) == m.end()) {
                m[arr[i][j]]++;
                count++;
            } else {
                while (count--) {
                    m[arr[i][count]]--;
                    if (m[arr[i][count]] == 0)
                        m.erase(arr[i][count]);
                }
                solve(arr, i + 1, m);
                return;
            }
        }
        solve(arr, i + 1, m);
        for (int j = 0; j < arr[i].size(); j++) {
            m[arr[i][j]]--;
            if (m[arr[i][j]] == 0)
                m.erase(arr[i][j]);
        }
        solve(arr, i + 1, m);
    }
    int maxLength(vector<string>& arr) {
        map<char, int> m;
        solve(arr, 0, m);
        return maxi;
    }
};