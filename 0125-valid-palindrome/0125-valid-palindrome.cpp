class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        int n=s.length();
        string k;
        for(int i=0;i<n;i++){
if(isalnum(s[i]))
k+=s[i];
        }
      string rev=k;
reverse(rev.begin(),rev.end());
return rev==k;
    }
};