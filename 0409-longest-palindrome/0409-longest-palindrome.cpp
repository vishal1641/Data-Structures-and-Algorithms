class Solution {
public:
    int longestPalindrome(string s) {
 unordered_map<char,int>m;
        for(int i=0;i<s.length();i++){
m[s[i]]++;
        }
        int k=0;
        if(m.size()==1)
        return s.length();
        for(auto it:m){
            if(it.second/2>=1)
            k+=it.second-it.second%2;
            else{

            }
        }
        if(s.length()-k>=1)
        k=k+1;
        return k;
    }
};