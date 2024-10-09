class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<int> st;
        for (int i = 0; i < s.size(); i++) {
            int j = 0;
            if (st.size() > 0) {
                if (st.top() == '(' && s[i] == ')') {
                    st.pop();
                    j = 1;
                }
            } if (j != 1)
                st.push(s[i]);
        }
        return st.size();
    }
};