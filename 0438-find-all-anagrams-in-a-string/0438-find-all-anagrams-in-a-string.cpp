class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        map<char, int> m;

        for (char c : p)
            m[c]++;

        int i = 0, j = 0, n = s.size();
        vector<int> v;
        int ans;

        while (j < n) {

            m[s[j]]--;

            if (j - i + 1 < p.size())
                j++;
            else {

                ans = 0;

                for (auto it : m) {
                    if (it.second != 0) {
                        ans = 1;
                        break;
                    }
                }

                if (ans == 0)
                    v.push_back(i);

                m[s[i]]++;
                i++;
                j++;
            }
        }

        return v;
    }
};