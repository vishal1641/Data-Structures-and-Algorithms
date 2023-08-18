class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        vector<int>v=nums;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]*2>nums[nums.size()-1])return -1;


        }
        return find(v.begin(),v.end(),nums[nums.size()-1])-v.begin();
    }
};