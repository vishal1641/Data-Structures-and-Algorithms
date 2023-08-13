class Solution {
public:
 
    string frequencySort(string s) {
        map<char,int>m;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        vector<pair<int,char>>v;
        for(auto it:m){
            v.push_back({it.second,it.first});
        }
    sort(v.begin(),v.end());string k;
    for(auto it:v){

        for(int i=0;i<it.first;i++){
            k+=it.second;
        }
    }
    reverse(k.begin(),k.end());
    return k;

    }
};