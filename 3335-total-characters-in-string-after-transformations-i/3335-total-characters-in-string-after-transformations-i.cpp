class Solution {
public:
    int mod = 1e9 + 7;
    int lengthAfterTransformations(string s, int t) {
        vector<int> v(26, 0);
        for (int i = 0; i < s.size(); i++) {
            v[s[i] - 'a']++;
        }
        while (t--) {
            vector<int> x(26, 0);
            for (int i = 0; i < v.size(); i++) {
                int a = i + 'a';
                int n = v[i];
                if (a == 'z') {
                    x['a' - 'a'] = (x['a' - 'a'] + n) % mod;
                    x['b' - 'a'] = (x['b' - 'a'] + n) % mod;
                } else {
                    x[(a + 1) - 'a'] = x[(a + 1) - 'a'] + n;
                }
            }
            v = move(x);
        }
        int sum = 0;
        for (auto it : v) {
            sum = (sum + it)%mod;
        }
        return sum;
    }
};