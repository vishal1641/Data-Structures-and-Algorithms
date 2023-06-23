class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
      map<string,vector<string>>m;
     vector<vector<string>>v;
      string p;
      for(int i=0;i<s.size();i++){
        p=s[i];
        sort(s[i].begin(),s[i].end());
        m[s[i]].push_back(p);
      }
      for(auto it:m){
v.push_back(it.second);
      }
      return v;
    }
};