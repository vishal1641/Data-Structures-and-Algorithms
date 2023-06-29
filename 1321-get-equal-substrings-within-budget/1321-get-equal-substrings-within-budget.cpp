class Solution {
public:
    int equalSubstring(string s, string t, int maxcost) {
        int n=s.length(),ans=0;
        int i=0,j=0,maxi=0;
        for(;j<n;j++){
            ans+=abs(s[j]-t[j]);
            for(;ans>maxcost;i++){
                ans=ans-abs(s[i]-t[i]);
            }
            maxi=max(j-i+1,maxi);
        } 
        return maxi;
       
    }
};