class Solution {
public:
    bool isBoomerang(vector<vector<int>>& nums) {
        int a=(nums[1][1]-nums[0][1])*(nums[2][0]-nums[1][0]);
        int b=(nums[2][1]-nums[1][1])*(nums[1][0]-nums[0][0]);
       if(a==b)
       return 0;
       return 1;
    }
};