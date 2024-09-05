class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxi1 = 0;
        int n = s.size();

        for (int i = 0; i < s.size(); i++) {
            vector<int> v(26, 0);
            int maxi = 0;  // Reset maxi for each new starting point i
            int changes = 0;

            for (int j = i; j < n; j++) {
                v[s[j] - 'A']++;  // Use s[j] instead of s[i]
                maxi = max(maxi, v[s[j] - 'A']);  // Update maxi with current character frequency

                changes = (j - i + 1) - maxi;  // Calculate the number of changes needed
                if (changes <= k) {
                    maxi1 = max(maxi1, j - i + 1);  // Update the maximum length of valid substring
                } else {
                    break;  // Break if changes exceed k
                }
            }
        }

        return maxi1;
    }
};
