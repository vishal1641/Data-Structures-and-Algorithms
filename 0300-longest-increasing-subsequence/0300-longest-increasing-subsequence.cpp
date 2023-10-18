class Solution {
public:

int mu(int i,vector<int>&nums,int dp[nums.size()]){
    int ans=1;
    if(dp[i]!=-1)
    return dp[i];
    for(int j=0;j<i;j++){
        if(nums[i]>nums[j])
        ans=max(ans,mu(j,nums,dp)+1);
    }
    return dp[i]=ans;
}
    int lengthOfLIS(vector<int>& nums) {
        int ans=1;
        int dp[nums.size()];
        memset(dp,-1,sizeof(dp));
        for(int i=nums.size()-1;i>=0;i--){
            ans=max(ans,mu(i,nums,dp));
        }
     return ans;
    }
};