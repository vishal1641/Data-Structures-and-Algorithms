class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0, j = 0;
        map<int, int> m;
        int maxi = 0;
        while (j < s.size()) {
            if (m.find(s[j]) == m.end())
             {
                m[s[j]]++;
                maxi = max(maxi, j-i+1);
                j++;
            } else {
                while (m.find(s[j]) != m.end()) {
                    m[s[i]]--;
                    if (m[s[i]] == 0)
                        m.erase(s[i]);
                    i++;
                }
                m[s[j]]++;
                j++;
            }
        }
            return maxi;
    }
};