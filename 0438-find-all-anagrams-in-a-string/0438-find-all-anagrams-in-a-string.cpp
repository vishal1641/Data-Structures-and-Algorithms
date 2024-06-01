class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        map<char, int> m;
        map<char, int> m1;
        for (int i = 0; i < p.size(); i++)
            m1[p[i]]++;
        int i = 0, j = 0;
vector<int>v;
        while (j < s.size()) {
            m[s[j]]++;
            if (j - i + 1 < p.size()) {
                j++;
            } else if (j - i + 1 == p.size()) 
            {
                if (m == m1)
                    v.push_back(i);
                m[s[i]]--;
                if (m[s[i]] == 0)
                    m.erase(s[i]);
                i++;
                j++;
            }
        }
        return v;
    }
};