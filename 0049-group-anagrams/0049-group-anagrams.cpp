class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> m;
        for (int i = 0; i < strs.size(); i++) {
            string v=strs[i];
            sort(begin(v),end(v));
            
                m[v].push_back(strs[i]);
            
        }
        vector<vector<string>>mc;
        for(auto it:m){
           mc.push_back(it.second); 
        }
        return mc;
    }
};