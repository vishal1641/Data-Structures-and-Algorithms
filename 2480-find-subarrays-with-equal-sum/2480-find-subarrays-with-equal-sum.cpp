class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        
        map<int,int>m;
        if(nums.size()==2)
        return false;
        for(int i=0;i<nums.size()-1;i++){
            m[nums[i]+nums[i+1]]++;
        }
        for(auto it:m){
            if(it.second>1)
            return true;
        }
        return false;
    }
};