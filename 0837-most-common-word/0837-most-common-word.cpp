class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
       unordered_map<string,int>m;
       string s;
       for(auto it:paragraph) {
           if(isalpha(it))
           s+=tolower(it);
           else if(s.size()>0){
           m[s]++;
           s.clear();}
       }
       if(s.size()>0)
       m[s]++;
       for(auto it:banned){
           m.erase(it);
       }
       int maxi=INT_MIN;
       string ans;
       for(auto it:m){
           if(it.second>maxi){
           maxi=it.second;
           ans=it.first;}

       }
       return ans;
    }
};