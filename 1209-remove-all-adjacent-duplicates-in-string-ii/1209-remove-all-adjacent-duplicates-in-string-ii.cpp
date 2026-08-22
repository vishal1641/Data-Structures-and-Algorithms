class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char, int>> st;
        for (int i = 0; i < s.size(); i++) {
            if (st.size() == 0) {
                st.push({s[i], 1});
            } else if (st.size() > 0 && st.top().first == s[i] &&
                       st.top().second == k - 1) {
                for (int i = 0; i < k-1; i++) {
                    st.pop();
                }
            } else if (st.size()>0&&st.top().first == s[i] && st.top().second < k - 1) {
                st.push({s[i], st.top().second + 1});
            } else {
                st.push({s[i], 1});
            }
        }
        string v = "";
        while(st.size()>0) {
            v.push_back(st.top().first);
            st.pop();
        }
        reverse(begin(v), end(v));
        return v;
    }
};