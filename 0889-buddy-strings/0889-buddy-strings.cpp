class Solution {
public:
    bool buddyStrings(string s, string goal) {
       if(s.size()!=goal.size())
       return false;
       if(s==goal&&set<char>(s.begin(),s.end()).size()<goal.size())
       return true;
       vector<int>v;
       for(int i=0;i<s.size();i++){
if(s[i]!=goal[i])
v.push_back(i);
       }
       return v.size()==2&&s[v[0]]==goal[v[1]]&&goal[v[0]]==s[v[1]];
       
    }
};