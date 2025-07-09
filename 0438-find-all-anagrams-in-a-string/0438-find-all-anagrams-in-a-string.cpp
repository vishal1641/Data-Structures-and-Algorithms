class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        map<char, int> a;
        map<char, int> b;
        for (int i = 0; i < p.size(); i++)
            b[p[i]]++;
        int i = 0, j = 0;
        vector<int> v;
        while (j < s.size()) {
            a[s[j]]++;
            if (j - i + 1 < p.size())
                j++;
            else {
                if (a == b)
                    v.push_back(i);

                a[s[i]]--;
                if (a[s[i]] == 0)
                    a.erase(s[i]);
                i++;
                j++;
            }
        }
        return v;
    }
};