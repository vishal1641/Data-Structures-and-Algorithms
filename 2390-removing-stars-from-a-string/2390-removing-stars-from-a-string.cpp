class Solution {
public:
    string removeStars(string s) {
        stack<char> st;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] != '*')
                st.push(s[i]);
            else {
                st.pop();
            }
        }
        string k = "";
        while (!st.empty()) {
            k += st.top();
            st.pop();
        }
        reverse(k.begin(), k.end());
        return k;
    }
};