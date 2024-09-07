class Solution {
public:
    int minSteps(string s, string t) {
        int ans = 0;
        map<char, int> m;
        map<char, int> m1;

        for (int i = 0; i < s.size(); i++)
            m[s[i]]++;
        for (int i = 0; i < t.size(); i++)
            m1[t[i]]++;
        for (auto it : m1) {
            if (m.find(it.first) == m.end()) {
                ans += m1[it.first];

            } else if (m.find(it.first) != m.end()) {

                ans += abs(m1[it.first] - m[it.first]);

                m.erase(it.first);
            }
        }

        for (auto it : m) {

            ans += m[it.first];
        }

        return ans;
    }
};