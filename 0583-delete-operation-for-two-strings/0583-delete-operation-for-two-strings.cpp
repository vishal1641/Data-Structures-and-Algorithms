class Solution {
public:
int dfs(int i,int j,int n,int m,string s,string t,vector<vector<int>>&dp )
{
    if(i>=n||j>=m)
    return 0;
    if(dp[i][j]!=-1)
    return dp[i][j];
    if(s[i]==t[j])
    return dp[i][j]=1+dfs(i+1,j+1,n,m,s,t,dp);
    return dp[i][j]=max(dfs(i+1,j,n,m,s,t,dp),dfs(i,j+1,n,m,s,t,dp));
}
    int minDistance(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        int ans=dfs(0,0,n,m,word1,word2,dp);
      return n - ans + m - ans;
    }
};