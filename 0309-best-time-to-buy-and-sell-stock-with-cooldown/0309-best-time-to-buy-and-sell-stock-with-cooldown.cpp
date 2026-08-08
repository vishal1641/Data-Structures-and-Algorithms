class Solution {
public:
    int solve(vector<int>& nums, int i,vector<int>&dp) {

        if (i >= nums.size())
            return 0;
if(dp[i]!=-1)
return dp[i];
        int take = 0;
        int notake = solve(nums, i + 1,dp);
        for (int j = i + 1; j < nums.size(); j++) {

            if (nums[j] >= nums[i])
                take = max(take, nums[j] - nums[i] + solve(nums, j + 2,dp));
        }
        return dp[i]=max(take, notake);
    }
    int maxProfit(vector<int>& prices) {
        vector<int>dp(prices.size()+1,-1);
         return solve(prices, 0,dp); }
};