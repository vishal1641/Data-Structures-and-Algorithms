class Solution {
public:
    string reverseVowels(string s) {
        int i = 0, j = s.size() - 1;
        string vowel = "aeiouAEIOU";

        while (i <= j) {
            if (vowel.find(s[i]) != string::npos &&
                vowel.find(s[j]) != string::npos) {
                swap(s[i], s[j]);
                i++;
                j--;
            }
            else if (vowel.find(s[i]) != string::npos &&
                     vowel.find(s[j]) == string::npos) {
                j--;
            }
            else {
                i++;
            }
        }

        return s;
    }
};