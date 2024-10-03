class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        map<char,int>m;
        map<char,int>m1;
        vector<int>v;
        for(int i=0;i<p.size();i++)
        m[p[i]]++;
        int i=0,j=0;
        while(j<s.size()){
            m1[s[j]]++;
            if(j-i+1<p.size())
            j++;
            else if (j-i+1==p.size()){
                if(m==m1)
                v.push_back(i);
                m1[s[i]]--;
                if(m1[s[i]]==0)
                m1.erase(s[i]);
                i++;j++;
            }
        }
        if(m1==m)
        v.push_back(i);
        return v;
    }
};