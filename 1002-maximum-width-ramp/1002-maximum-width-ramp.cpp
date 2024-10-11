class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        vector<pair<int,int>>v;
        for(int i=0;i<nums.size();i++){
            v.push_back({nums[i],i});
        }
        sort(begin(v),end(v));
        int maxi=0,mini=v[0].second;
        for(auto it:v){
            maxi=max(maxi,it.second-mini);
            mini=min(mini,it.second);
        }
        return maxi;
    }
};