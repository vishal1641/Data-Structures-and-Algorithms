class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0, j = 0;
        map<char, int> m;
        int maxi=0;
        while (j < s.size()) {
            m[s[j]]++;
            if (j - i + 1 == m.size()) {
                maxi = max(maxi, j - i + 1);
                j++;
            } else if (j - i + 1 > m.size()) {
                while (j - i + 1 > m.size()) {
                    m[s[i]]--;
                    if (m[s[i]] == 0)
                        m.erase(s[i]);
                        i++;
                }
                j++;
            }
        }
        return maxi;
    }
};