class Solution {
public:
    int minimumPushes(string word) {
        map<char, int> m;
        for (int i = 0; i < word.size(); i++) {
            m[word[i]]++;
        }
        vector<pair<char, int>> v(begin(m), end(m));
        sort(begin(v), end(v), [](pair<char, int>& a, pair<char, int>& b) {
            if (a.second == b.second)
                return a.first < b.first;
            return a.second > b.second;
        }) ;
        int n = v.size();
        int x = 1;
        int ans=0;
        for (int i = 0; i < n ; i = i + 8) {
            for (int j = i; j < min(n,i+8); j++) {
                ans += v[j].second * x;
            }
            x++;
        }
        return ans;
    }
};