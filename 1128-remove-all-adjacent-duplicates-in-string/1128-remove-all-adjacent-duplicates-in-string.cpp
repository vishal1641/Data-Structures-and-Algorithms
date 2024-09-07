class Solution {
public:
    string removeDuplicates(string s) {
        deque<char> q;
        q.push_back(s[0]);
        for (int i = 1; i < s.size(); i++) {
            if (q.size()>0&&s[i] == q.back())
                q.pop_back();
            else
                q.push_back(s[i]);
        }
        string st = "";
        for (auto it : q)
            st.push_back(it);
        return st;
    }
};