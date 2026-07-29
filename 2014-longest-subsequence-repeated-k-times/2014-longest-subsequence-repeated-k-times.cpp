class Solution {
public:
    string res = "";

    bool issub(string s, string curr, int k) {
        int i = 0, j = 0;

        while (i < s.size() && j < k * curr.size()) {
            if (s[i] == curr[j % curr.size()]) {
                i++;
                j++;
            } else {
                i++;
            }
        }

        return j == k * curr.size();
    }

    void solve(string &s, string &curr, vector<bool> &canuse,
               vector<int> &reqfreq, int k, int maxlen) {

        if (curr.size() > maxlen)
            return;

        if ((curr.size() > res.size() ||
             (curr.size() == res.size() && curr > res)) &&
            issub(s, curr, k))
            res = curr;

        for (int i = 0; i < 26; i++) {

            if (!canuse[i])
                continue;

            if (reqfreq[i] == 0)
                continue;

            char ch = 'a' + i;

            curr.push_back(ch);
            reqfreq[i]--;

            solve(s, curr, canuse, reqfreq, k, maxlen);

            curr.pop_back();
            reqfreq[i]++;
        }
    }

    string longestSubsequenceRepeatedK(string s, int k) {

        int frq[26] = {};

        for (char c : s)
            frq[c - 'a']++;

        vector<bool> canuse(26, false);
        vector<int> reqfreq(26, 0);

        for (int i = 0; i < 26; i++) {
            if (frq[i] >= k) {
                canuse[i] = true;
                reqfreq[i] = frq[i] / k;
            }
        }

        int maxlen = s.size() / k;

        string curr = "";

        solve(s, curr, canuse, reqfreq, k, maxlen);

        return res;
    }
};