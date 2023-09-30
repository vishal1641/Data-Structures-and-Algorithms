class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int>v;
        for(int i=0;i<s.size();i++){
            if(s[i]==c)
            v.push_back(i);
        }
        vector<int>z;
        int maxi=INT_MAX;
        for(int i=0;i<s.size();i++)
        {
            for(int j=0;j<v.size();j++)
            {
                int g=abs(v[j]-i);
                maxi=min(maxi,g);
            }
z.push_back(maxi);
maxi=INT_MAX;
        }
        return z;
    }
};