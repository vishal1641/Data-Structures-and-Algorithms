class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
        int j = 0;
        for (int i = 0; i < popped.size(); i++) {
            if (st.size() > 0 && st.top() == popped[j]) {
                while (st.size() > 0 && st.top() == popped[j]) {
                    st.pop();
                    j++;
                }
            }
            st.push(pushed[i]);
        }
        while (st.size() > 0 && st.top() == popped[j]) {
            st.pop();
            j++;
        }
        if (st.size() == 0)
            return true;
        return false;
    }
};