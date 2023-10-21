class Solution {
public:
int solve(int n,vector<int>&dp){
    if(n==0)
    return 0;
    if(dp[n]!=-1)
    return dp[n];
    int ans=INT_MAX;
    for(int i=1;i*i<=n;i++)
    {
       ans= min(ans,solve(n-i*i,dp)+1);
    }
    return dp[n]= ans; 
}
    int numSquares(int n) {
        vector<int>dp(n+1,-1);
        int ans=solve(n,dp);
        if(ans!=INT_MAX)
       return ans;
       return 0;
    }
};