class Solution {
public:
int robo(vector<int>&nums,int n,vector<int>&dp){
    if(n==0)
    return nums[0];
    if(n<0)
    return 0;
    if(dp[n]!=-1)
    return dp[n];
    int sum1=nums[n]+robo(nums,n-2,dp);
    int sum2=robo(nums,n-1,dp);
    return dp[n]= max(sum1,sum2);
}
    int rob(vector<int>& nums) {
        vector<int>dp(400,-1);
       int ans=robo(nums,nums.size()-1,dp);
       return ans;
    }
};