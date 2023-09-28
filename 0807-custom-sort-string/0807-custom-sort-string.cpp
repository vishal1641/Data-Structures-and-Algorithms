class Solution {
public:
    string customSortString(string order, string s) {
        map<char,int>m;
        for(int i=0;i<s.size();i++)
        m[s[i]]++;
        string k="";
        for(int i=0;i<order.size();i++)
        {
            if(m[order[i]]>0)
            {
                for(int j=0;j<m[order[i]];){
                k+=order[i];
                m[order[i]]--;
                }
                if(m[order[i]]==0)
                m.erase(order[i]);
            }
        }
        for(int i=0;i<s.size();i++){
            if(m.find(s[i])!=m.end())
            k+=s[i];
        }
        return k;
    }
};