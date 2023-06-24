class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      int n=s.length();
      int i=0,j=0,maxi=0;
      unordered_map<char,int>m;
      for(;j<n;j++){
m[s[j]]++;
for(;m[s[j]]>1;i++){
    m[s[i]]--;
}
maxi=max(maxi,j-i+1);
      }
  return maxi;    
    }
};