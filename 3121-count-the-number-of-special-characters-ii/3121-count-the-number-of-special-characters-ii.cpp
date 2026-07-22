class Solution {
public:
    int numberOfSpecialChars(string word) {
        map<char, vector<int>> m;

        for (int i = 0; i < word.size(); i++) {
            m[word[i]].push_back(i);
        }

        int ans = 0;

        for (auto it : m) {
            if (it.first >= 'a' && it.first <= 'z') {

                char up = it.first - 'a' + 'A';

                if (m.find(up) != m.end()) {

                    if (m[it.first].back() < m[up][0])
                        ans++;
                }
            }
        }

        return ans;
    }
};