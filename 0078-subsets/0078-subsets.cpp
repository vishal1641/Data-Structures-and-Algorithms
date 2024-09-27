class Solution {
public:
    vector<vector<int>> v;
    void solve(vector<int>& nums, int i, vector<int>& temp) {
        v.push_back(temp);
        for (int j = i; j < nums.size(); j++) {
            temp.push_back(nums[j]);
            solve(nums, j + 1, temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        solve(nums, 0, temp);
        return v;
    }
};