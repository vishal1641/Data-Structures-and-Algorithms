class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(begin(nums),end(nums));
        int a=nums[0]*nums[1]*nums[2];
        int b=nums[0]*nums[1]*nums[nums.size()-1];
        int c=nums[0]*nums[nums.size()-1]*nums[nums.size()-2];
        int d=nums[nums.size()-3]*nums[nums.size()-1]*nums[nums.size()-2];
        return max({a,b,c,d});
        
    }
};