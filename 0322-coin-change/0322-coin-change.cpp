class Solution {
public:

    int coinChange1(vector<int>& coins, int amount,vector<int>&dp) 
    {
        int ans=INT_MAX;
        if(amount ==0){
        return 0;}
        if(dp[amount]!=-1)
        return dp[amount];
        for(int i=0;i<coins.size();i++)
        {
            if(amount-coins[i]>=0)
           ans=min(ans+0ll, coinChange1(coins,amount-coins[i],dp)+1ll);
        }
         return dp[amount]=ans;

    }
    int coinChange(vector<int>& coins, int amount) 
    {
       vector<int>dp(10090,-1);
        int ans=coinChange1(coins,amount,dp);
        if(ans==INT_MAX)
        return -1;
        return ans;
     }

};