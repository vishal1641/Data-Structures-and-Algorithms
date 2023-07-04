class Solution {
public:
void sub(int index,vector<int>output,vector<vector<int>>&ans,vector<int>nums){
    if(index>=nums.size())
    {
        ans.push_back(output);
        return;
    }
    sub(index+1,output,ans,nums);
    int element=nums[index];
    output.push_back(element);
    sub(index+1,output,ans,nums);
}
    vector<vector<int>> subsets(vector<int>& nums) {
       vector<vector<int>>ans;
       vector<int>output;
       int index=0;
       sub(index,output,ans,nums);
       return ans; 
    }
};