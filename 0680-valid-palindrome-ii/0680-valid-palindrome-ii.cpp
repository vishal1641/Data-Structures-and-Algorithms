class Solution {
public:
    bool validPalindrome(string s) {

        string k = s;
        reverse(begin(s), end(s));
        if (s == k)
            return true;
        int i = 0;
        int j = k.size() - 1;
        int count = 0;
        while (i <= j) {
            if (k[i] == k[j]) {
                j--;
                i++;
            } else {
                j--;
                count++;
            }
        }
        i = 0, j = k.size() - 1;
        int count1 = 0;
        while (i <= j) {
            if (k[i] == k[j]) {
                j--;
                i++;
            } else {
                i++;
                count1++;
            }
        }
        if (count == 1 || count1 == 1)
            return true;
     
            return false;
    }
};