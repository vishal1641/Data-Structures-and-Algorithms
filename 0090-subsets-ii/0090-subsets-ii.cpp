class Solution {
public:
vector<vector<int>>ans;
void solve(int i,vector<int>&temp,vector<int>&nums){
    ans.push_back(temp);
    for(int j=i;j<nums.size();j++){
        if(j>i&&nums[j]==nums[j-1])
        continue;
        temp.push_back(nums[j]);
        solve(j+1,temp,nums);
        temp.pop_back();
    }
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>temp;
        sort(begin(nums),end(nums));
        solve(0,temp,nums);
        return ans;
    }
};