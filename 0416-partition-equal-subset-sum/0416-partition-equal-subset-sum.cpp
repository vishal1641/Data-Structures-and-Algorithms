class Solution {
public:
int solve(int n,vector<int>&nums,vector<vector<int>>&dp,int target){
bool a=false,b=false;
if(target==0)
return true;
if(n==0){
    if(target==0)
    return true;
    return false;
}
if(dp[n][target]!=-1)
return dp[n][target];

    if(nums[n-1]<=target){
        a=solve(n-1,nums,dp,target-nums[n-1])||solve(n-1,nums,dp,target);
    }
    else
    b=solve(n-1,nums,dp,target);
    return dp[n][target]=a||b;
}
    bool canPartition(vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        if(sum%2!=0)
        return false;
        int n=nums.size();
        vector<vector<int>>dp(n+1,vector<int>(sum/2+1,-1));
        return solve(n,nums,dp,sum/2);
    }
};