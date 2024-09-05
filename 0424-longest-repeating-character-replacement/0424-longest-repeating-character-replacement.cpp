class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxi1=0;
        int n=s.size();
        int changes =0;
        for(int i=0;i<s.size();i++){
            vector<int>v(26,0);
           int  maxi=0,changes=0;
            for(int j=i;j<n;j++){
                v[s[j]-'A']++;
                maxi=max(maxi,v[s[j]-'A']);
                changes=(j-i+1)-maxi;
                if(changes<=k)
                maxi1=max(maxi1,j-i+1);
                else 
                break;
            }
        }
        return maxi1;
    }
};