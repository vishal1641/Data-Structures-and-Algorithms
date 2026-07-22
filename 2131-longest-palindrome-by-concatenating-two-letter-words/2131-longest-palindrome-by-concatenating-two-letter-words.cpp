class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string, int> m;
        int ans = 0;

        for (int i = 0; i < words.size(); i++) {
            string k = words[i];
            reverse(k.begin(), k.end());

            if (m.find(k) != m.end()) {
                ans += 4;
                m[k]--;
                if (m[k] == 0)
                    m.erase(k);
            } else {
                m[words[i]]++;
            }
        }

        for (auto it : m) {
            if (it.first[0] == it.first[1]) {
                ans += 2;
                break;
            }
        }

        return ans;
    }
};