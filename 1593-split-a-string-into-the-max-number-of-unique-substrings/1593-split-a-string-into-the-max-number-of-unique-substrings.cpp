class Solution {
public:
    int maxi = 0;
    void solve(string s, int i, map<string, int>& m) {
        if (i == s.size()) {

            maxi = max(maxi, (int)m.size());
            return;
        }

        for (int j = i; j < s.size(); j++) {
            string k = s.substr(i, j - i + 1);
            if (m.size() == 0 || m.find(k) == m.end()) {
                m[k]++;
                solve(s, j + 1, m);

                m[k]--;
                if (m[k] == 0)
                    m.erase(k);
            }
        }
    }
    int maxUniqueSplit(string s) {
        map<string, int> m;
        solve(s, 0, m);
        return maxi;
    }
};