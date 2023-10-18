class Solution {
public:
int mins(vector<int>&cost,int n,vector<int>&dp){
    if(n==0)
    return cost[0];
    if(n==1)
    return cost[1];
    if(dp[n]!=-1)
    return dp[n];
    return dp[n]=cost[n]+min(mins(cost,n-1,dp),mins(cost,n-2,dp));
}
    int minCostClimbingStairs(vector<int>& cost) {
      vector<int>dp(1010,-1);
  int ans=min(mins(cost,cost.size()-1,dp),mins(cost,cost.size()-2,dp));
  return ans;
    }
};