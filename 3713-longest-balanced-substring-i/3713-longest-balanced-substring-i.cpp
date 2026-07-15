class Solution {
public:
    int longestBalanced(string s) {
        int maxi = 0;
        for (int i = 0; i < s.size(); i++) {
            unordered_map<char, int> m;
            for (int j = i; j < s.size(); j++) {
            int flag = 0;

                m[s[j]]++;
                int x = m[s[j]];
                for (auto it : m) {
                    if (it.second != x) {
                        flag = 1;
                        break;
                    }
                }

                if (flag == 0)
                    maxi = max(maxi, j - i + 1);
            }
        }
        return maxi;
    }
};