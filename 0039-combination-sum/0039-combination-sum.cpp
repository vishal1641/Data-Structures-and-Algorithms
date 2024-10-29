class Solution {
public:
vector<vector<int>>ans;
void solve(int i,vector<int>&temp,vector<vector<int>>&ans,int sum,int target,vector<int>&nums){
if(sum>target)
return;
if(sum==target)
ans.push_back(temp);
if(i>=nums.size())
return ;

    for(int j=i;j<nums.size();j++){
        sum+=nums[j];
        temp.push_back(nums[j]);
        solve(j,temp,ans,sum,target,nums);
        sum-=nums[j];
        temp.pop_back();
    }
}
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int>temp;
        solve(0,temp,ans,0,target,nums);
        return ans;
    }
};