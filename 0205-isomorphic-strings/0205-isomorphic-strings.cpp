class Solution {
public:
    bool isIsomorphic(string s, string b) {

        unordered_map<char, char> mp;
        bool check = true;
        set<char> st;

        for (int j = 0; j < b.size(); j++) {
            if (mp.find(b[j]) != mp.end()) {
                if (mp[b[j]] != s[j]) {
                    check = false;
                    break;
                }
            } else {
                if (st.find(s[j]) != st.end()) {
                    check = false;
                    break;
                }
                mp[b[j]] = s[j];
                st.insert(s[j]);
            }
        }

        if (check == true)
            return true;
        return false;
    }
};