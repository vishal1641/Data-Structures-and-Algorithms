class Solution {
public:
static bool comp(pair<int,int>a,pair<int,int>b){
   if(a.first>b.first)
        return true;
        else if(a.first<b.first)
        return false;
        else{
            if(a.second<b.second)
            return true;
        else return false;}
}
    vector<int> frequencySort(vector<int>& nums) {
        map<int, int> m;
        for (int i = 0; i < nums.size(); i++)
            m[nums[i]]++;
        vector<pair<int, int>> p;
        for (auto it : m) {
            p.push_back({it.second, it.first});
        }
        sort(begin(p), end(p), comp);
        vector<int> v;
        for (int i = 0; i < p.size(); i++) {
            for (int j = 0; j < p[i].first; j++)
                v.push_back(p[i].second);
        }
        reverse(begin(v),end(v));
        return v;
    }
};