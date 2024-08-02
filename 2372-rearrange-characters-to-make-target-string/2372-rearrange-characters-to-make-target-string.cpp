class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        map<char,int>m;
       map<char,int>m1;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        for(int i=0;i<target.size();i++){
            m1[target[i]]++;
        }
        int ans1=INT_MAX;
        int ans=0;
        for(int i=0;i<target.size();i++){
         ans=m[target[i]]/m1[target[i]];
         ans1=min(ans,ans1);
        }
        return ans1;
    }
};