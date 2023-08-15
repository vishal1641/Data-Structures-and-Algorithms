class myComparator {
public:
    int operator()(pair<int,int>&p1,pair<int,int>&p2){
        if(p1.first>p2.first)
        return true;
        else if(p1.first<p2.first)
        return false;
        else{
            if(p1.second<p2.second)
            return true;
        else return false;}
    } };
    class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,myComparator>m;
       unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
         for(auto it:mp){
            m.push({it.second,it.first});
         
        }
        vector<int>v;
        while(m.size()>0){

            for(int i=1;i<=m.top().first;i++){
                v.push_back(m.top().second);
            }
            m.pop();
        }
        return v;
    }
};