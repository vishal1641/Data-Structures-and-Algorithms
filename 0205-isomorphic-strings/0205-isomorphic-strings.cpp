class Solution {
public:
    bool isIsomorphic(string s, string t) 
    {
        if(s.length()!=t.length())
        return false;
        map<char,char>m;
        for(int i=0;i<s.size();i++)
        {

            if(m.find(s[i])==m.end())
            m[s[i]]=t[i];
            else
            {
                if(m[s[i]]!=t[i])
                return false;
            }

        }
        map<char,char>l;
         for(int i=0;i<s.size();i++)
        {

            if(l.find(t[i])==l.end())
            l[t[i]]=s[i];
            else
            {
                if(l[t[i]]!=s[i])
                return false;
            }

        }
        return true;


        
    }
};