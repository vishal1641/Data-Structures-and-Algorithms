class Solution {
public:
struct compare{
    bool operator()(const pair<int,string>&a,const pair<int,string>&b){
        if(a.first==b.first)
        return a.second<b.second;
        return a.first>b.first;
    }
};
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
       unordered_map<string,int>m;
        for(auto it:words){
            m[it]++;
        }
        priority_queue<pair<int,string>,vector<pair<int,string>>,compare>p;
        for(auto it :m)
        {
            p.push({it.second,it.first});
            if(p.size()>k)
            p.pop();
        }
        vector<string>v;
        while(p.size()>0)
        {
            v.push_back(p.top().second);
            p.pop();
        }
        reverse(v.begin(),v.end());
        return v;
    }
};