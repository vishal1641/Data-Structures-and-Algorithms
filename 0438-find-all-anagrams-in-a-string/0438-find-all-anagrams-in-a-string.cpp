class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int i = 0, j = 0;
        map<char, int> m;
        for (int i = 0; i < p.size(); i++)
            m[p[i]]++;
            int x=0;
            for(auto it :m){
                x+=it.second;
            }
        map<char, int> m1;
        vector<int> v;
        while (j < s.size()) {
            m1[s[j]]++;
            if (x > j-i+1) {
                j++;
            } else if (x == j-i+1) {
                if (m1 == m)
                    v.push_back(i);
                m1[s[i]]--;
                if (m1[s[i]] == 0)
                    m1.erase(s[i]);
                i++;
                j++;
            }
        }
        return v;
    }
};