class Solution {
public:
    int calculate(string s) {

        stack<int> st;

        int number = 0;
        char sign = '+';

        for (int i = 0; i < s.size(); i++) {

            if (isdigit(s[i])) {

                number = number * 10 + (s[i] - '0');
            }

            if ((!isdigit(s[i]) && s[i] != ' ') || i == s.size() - 1) {

                if (sign == '+') {

                    st.push(number);
                }

                else if (sign == '-') {

                    st.push(-number);
                }

                else if (sign == '*') {

                    int a = st.top();
                    st.pop();

                    st.push(a * number);
                }

                else if (sign == '/') {

                    int a = st.top();
                    st.pop();

                    st.push(a / number);
                }

                number = 0;

                sign = s[i];
            }
        }

        int result = 0;

        while (!st.empty()) {

            result += st.top();
            st.pop();
        }

        return result;
    }
};