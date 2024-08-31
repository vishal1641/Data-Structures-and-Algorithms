class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int>m(3,-1);
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a')
            m[s[i]-'a']=i;
            if(s[i]=='b')
            m[s[i]-'a']=i;
            if(s[i]=='c')
            m[s[i]-'a']=i;
            if(m[0]>-1&&m[1]!=-1&&m[2]!=-1){
                ans+=1+min({m[0],m[1],m[2]});
            }
        }
        return ans;
    }
};