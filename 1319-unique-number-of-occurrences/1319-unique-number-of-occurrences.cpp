class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>m;
        for(auto it:arr){
          m[it]++;  
        }
     unordered_set<int>s;
        for(auto it:m)
        {
if(s.count(it.second)>=1)
return 0;
s.insert(it.second);
        }
       

        return 1;
    }
};