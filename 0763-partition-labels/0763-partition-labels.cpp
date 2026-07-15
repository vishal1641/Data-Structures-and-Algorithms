class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char, int> m;
        for (int i = 0; i < s.size(); i++) {
            m[s[i]] = i;
        }
        int i = 0, j = 0;
        j = max(j, m[s[0]]);
        vector<int> v;
        int a=0;
        while (i < s.size()) {
            j = max(j, m[s[i]]);
            if (i == j) {
                if (v.size() == 0)
                    v.push_back(j + 1);
                else
                    v.push_back(j + 1 - a);
                a = i + 1;

                j = 0;
            }
            i++;
        }
        return v;
    }
};