class Solution {
public:
    int countBinarySubstrings(string s) {
        int p=0,c=1,ans=0;
        for(int i=1;i<s.size();i++){
            if(s[i]==s[i-1])
            c++;
            else{
                ans+=min(c,p);
                p=c;
                c=1;
            }
        }
        return ans+min(c,p);
    }
};