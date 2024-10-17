class Solution {
public:
    int maximumSwap(int num) {
        string s = "";
        s = to_string(num);
        string p = s;
        sort(begin(s), end(s), greater<char>());
        for (int i = 0; i < p.size(); i++) {
            if (s[i] == p[i])
                continue;
            else {
                for (int k = p.size() - 1; k >= i; k--) {
                    if (p[k] == s[i]){
                        swap(p[i], p[k]);
                    break;}
                }
                break;
            }
        }
        int o = stoi(p);
        return o;
    }
};