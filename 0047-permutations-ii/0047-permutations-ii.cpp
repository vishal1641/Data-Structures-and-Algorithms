class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int>& nums, vector<int>& temp,vector<int>&vis) {

        if (temp.size() == nums.size()){
            ans.push_back(temp);
            return;}

        for (int j = 0; j < nums.size(); j++) {

            if (j > 0 && nums[j] == nums[j - 1] && vis[j - 1] == 0) {
                continue;
            }
              if (vis[j])
                continue;
            vis[j]=1;
            temp.push_back(nums[j]);
            solve(nums, temp,vis);
            temp.pop_back();
            vis[j]=0;
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(begin(nums), end(nums));
        vector<int>vis(nums.size(),0);
        vector<int>temp;
        solve(nums, temp, vis);
        return ans;
    }
};