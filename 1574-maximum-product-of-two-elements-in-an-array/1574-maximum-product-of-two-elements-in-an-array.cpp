class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi = INT_MIN, maxi1 = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] >= maxi) {
                maxi1=maxi;
                maxi = nums[i];
             
            } else {
                if (nums[i] < maxi && nums[i] > maxi1)
                    maxi1 = nums[i];
            }
        }
        return (maxi1-1)*(maxi-1);
    }
};