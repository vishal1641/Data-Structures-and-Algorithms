class Solution {
public:
    int evalRPN(vector<string>& s) {
        stack<string> st;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != "+" && s[i] != "-" && s[i] != "*"&& s[i] != "/")
                st.push(s[i]);
            if (s[i] == "+") {
                int a = stoi(st.top());
                st.pop();
                int b = stoi(st.top());
                st.pop();
                st.push(to_string(a + b));

            } else if (s[i] == "-") {
                int a = stoi(st.top());
                st.pop();
                int b = stoi(st.top());
                st.pop();
                st.push(to_string(-a + b));
            } else if (s[i] == "*") {
                int a = stoi(st.top());
                st.pop();
                int b = stoi(st.top());
                st.pop();
                st.push(to_string(a * b));
            } else if(s[i]=="/") {
                int a = stoi(st.top());
                st.pop();
                int b = stoi(st.top());
                st.pop();
                st.push(to_string(b / a));
            }
        }
        return stoi(st.top());
    }
};