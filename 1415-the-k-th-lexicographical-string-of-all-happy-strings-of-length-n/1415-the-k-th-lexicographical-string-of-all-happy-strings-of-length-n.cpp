class Solution {
public:
    vector<string> v;
    void solve(string& s, string& m,int n) {

        if (n == m.size()) {
            v.push_back(m);
            return;
        }

        for (int j = 0; j < s.size(); j++) {
            if (m.size() > 0 && m.back() == s[j])
                continue;
            else {
                m.push_back(s[j]);
                solve(s, m,n);
                m.pop_back();
            }
        }
    }
    string getHappyString(int n, int k) {
        string m = "";
        string s = "abc";
        
        solve(s, m,n);
        if (k > v.size())
            return "";
        return v[k - 1];
    }
};