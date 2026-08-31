class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        string m = "";
        for (int i = 0; i < path.size(); i++) {
            if (path[i] != '/')
                m.push_back(path[i]);
            else {
                if ( m == ".."){
                    if(st.size()>0)
                    st.pop();
                }
                else {
                    if (m != "." && m != "")
                        st.push(m);
                }
                m = "";
            }
        }

        if (m == "..") {
            if (!st.empty())
                st.pop();
        } else if (m != "" && m != ".") {
            st.push(m);
        }
        string v = "";
        while (!st.empty()) {
            v = '/' + st.top() + v;
            st.pop();
        }
        if (v == "")
            return "/";

        return v;
    }
};