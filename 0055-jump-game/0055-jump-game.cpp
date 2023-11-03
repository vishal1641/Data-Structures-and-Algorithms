class Solution {
public:
bool jump(vector<int>&nums,int index,int n,vector<int>&dp){
if(index>=n)
return true;
if(dp[index]!=-1)
return dp[index];

for(int i=1;i<=nums[index];i++){
   if(jump(nums,index+i,n,dp))
    return dp[index]=true;
}
return dp[index]=false;
}
    bool canJump(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
int n=nums.size()-1;
        return jump(nums,0,n,dp);
    }
};