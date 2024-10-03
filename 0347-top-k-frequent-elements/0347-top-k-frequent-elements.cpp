class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
        m[nums[i]]++;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>p;
        for(auto it:m){
            p.push({it.second,it.first});
            if(p.size()>k)
            p.pop();
        }
        vector<int>v;
        while(!p.empty()){
v.push_back(p.top().second);
p.pop();
        }
        return v;
    }
};