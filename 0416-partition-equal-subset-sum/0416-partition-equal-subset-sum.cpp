class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = accumulate(begin(nums), end(nums), 0);
        int x = sum / 2;
        if (sum% 2 != 0)
            return 0;
            int n=nums.size();
        vector<vector<int>> dp(nums.size() + 1, vector<int>(x + 1, 0));

        for (int i = 0; i <= n; i++)
            dp[i][0] = 1;
        for (int j = 1; j <= x; j++) {
            dp[0][j] = 0;
        }
        for(int i=1;i<n+1;i++){
            for(int j=1;j<x+1;j++){
                if(nums[i-1]<=j)
                dp[i][j]=dp[i-1][j]||dp[i-1][j-nums[i-1]];
                else
                dp[i][j]=dp[i-1][j];
            }
        }
        return dp[n][x];
    }
};