class Solution {
public:
    int characterReplacement(string s, int k) {
        int i=0,j=0,n=s.length(),ans=0;
       int a[26]={};
       for(;j<n;j++){
           a[s[j]-'A']++;
       
       for(;j-i+1-*max_element(a,a+26)>k;i++){
a[s[i]-'A']--;
       }
ans=max(ans,j-i+1);

         }
         return ans;
    }
};