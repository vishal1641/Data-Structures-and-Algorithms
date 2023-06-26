class Solution {
public:
    int strStr(string str, string s) {
    
     for (int i = 0; i < str.length(); i++) {
        if (str.substr(i, s.length()) == s) { 
            return i;}}
            return -1;
    }
};