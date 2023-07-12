class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& a, vector<int>& b) {
        vector<int>v;
        map<int,int>m;
        for(int i=0;i<b.size();i++){
            m[a[i]]++;
            m[b[i]]++;
            int count=0;
            for(auto it:m){
            if(it.second ==2)        
            count++;    }
            v.push_back(count);
        }
        return v;
    }
};