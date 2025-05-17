class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        auto isVowel = [](char ch) {
            return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
        };

        vector<int> prefixSum(words.size(), 0);
        for (int i = 0; i < words.size(); i++) {
            bool startVowel = isVowel(words[i][0]);
            bool endVowel = isVowel(words[i].back());

            if (startVowel && endVowel)
                prefixSum[i] = 1;

            if (i > 0)
                prefixSum[i] += prefixSum[i - 1];
        }

        vector<int> ans;
        for (auto& q : queries) {
            int l = q[0], r = q[1];
            if (l == 0)
                ans.push_back(prefixSum[r]);
            else
                ans.push_back(prefixSum[r] - prefixSum[l - 1]);
        }

        return ans;
    }
};
