class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        
        int n=s.length();
     unordered_map<string,int>m;
        vector<string>v;
        for(int i=0;i<=n-10;i++){
            string h=s.substr(i,10);
        m[h]++;
        }
        for(auto it:m){
            if(it.second>1)
            v.push_back(it.first);
        }
        return v;
    }
};