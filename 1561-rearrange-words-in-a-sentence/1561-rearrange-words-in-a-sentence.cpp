class Solution {
public:
    string arrangeWords(string t) {
        multimap<int,string> mp;
        string s="";
        for(int i=0;i<t.size();i++)
        {
           if(t[i]==' ')
           {
               mp.insert({s.size(),s});
               s="";
           }
           else
             s+=t[i];
        }
        if(s!="")
        mp.insert({s.size(),s});
        s="";
        for (auto& it : mp) 
        {
           string s2=it.second;
           transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
           s+=(s2+" ");
        }
        // s=s.substr(0,s.size()-1);
        s.pop_back();
        s[0]=toupper(s[0]);
  return s;  }
};