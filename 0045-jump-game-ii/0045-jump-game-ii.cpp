class Solution {
public:
int jomp(vector<int>&nums,int index,int n,vector<int>&dp){
    if(index>=n)
    return 0;
    int mini=1e9;
if(dp[index]!=-1)
return dp[index];
    for(int i=1;i<=nums[index];i++)
    {
mini=min(mini,1+jomp(nums,index+i,n,dp));

    }
    return dp[index]=mini;
}
    int jump(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        int n=nums.size()-1;
        if(n==0)
        return 0;
       return jomp(nums,0,n,dp); 
    }
};