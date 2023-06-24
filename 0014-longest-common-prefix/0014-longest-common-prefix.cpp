class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
      
        sort(strs.begin(),strs.end());
       string s="";
       int n1=strs.size();
       int n=strs[0].length();
       string a=strs[0],b=strs[n1-1];
        for(int i=0;i<n;i++){
if(a[i]==b[i])
s+=a[i];
else break;
        }
        return s;
    }
};