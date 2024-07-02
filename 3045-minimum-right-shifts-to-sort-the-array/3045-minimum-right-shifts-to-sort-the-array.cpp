class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
        vector<int> v;
        v = nums;
        sort(begin(v), end(v));
        int maxi = INT_MIN, mini = INT_MAX, maxp = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (maxi < nums[i]) {
                maxi = nums[i];
                maxp = i;
            }
            
        }
        int x = nums.size() - maxp - 1;
        rotate(nums.begin(), nums.begin() + nums.size() - x, nums.end());
        if(nums==v&&x==0)
        return 0;
        else if(nums==v&&x!=0)
        return nums.size() - maxp - 1;
        return -1;
    }
};