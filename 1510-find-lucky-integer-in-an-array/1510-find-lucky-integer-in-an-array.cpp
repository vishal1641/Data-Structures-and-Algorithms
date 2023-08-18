class Solution {
public:
    int findLucky(vector<int>& nums) {
        map<int,int>m;
        for(auto it:nums){
            m[it]++;
        }
        int maxi=0;
        for(auto it:m){
            if(it.second==it.first)
            {
                maxi=max(maxi,it.first);
            }
        }
        if(maxi>0)
        return maxi;
        return -1;
    }
};