class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>m;
        map<int,int>mp;
for(int i=0;i<nums.size();i++){
    mp[nums[i]]++;
}
for(auto it:mp){
    m.push({it.second,it.first});
    if(m.size()>k)
    m.pop();
}
vector<int>v;
while(m.size()>0){
v.push_back(m.top().second);
m.pop();
}
return v;
    }
};