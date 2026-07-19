class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> m;
        vector<string> v;
        string k = "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ' ')
                k += s[i];
            else {
                v.push_back(k);
                k = "";
            }
        }
        v.push_back(k);
        if(pattern.size()!=v.size())
        return false;
        set<string> st;
        for (int i = 0; i < pattern.size(); i++) {
            if (m.find(pattern[i]) == m.end() && st.find(v[i]) == st.end()) {
                m[pattern[i]] = v[i];
                st.insert(v[i]);

            } else if (m.find(pattern[i]) != m.end()) {
                if (m[pattern[i]] == v[i])
                    continue;
                else
                    return false;
            } else
                return false;
        }
        return true;
    }
};