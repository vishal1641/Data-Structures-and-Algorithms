class Solution {
public:
    vector<vector<int>> v;
    void solve(vector<int>& nums, vector<int>& temp, int i, int sum) {
        if (i >= nums.size())
            return;

        for (int j = i; j < nums.size(); j++) {
            if (j > i && nums[j - 1] == nums[j])
                continue;
            temp.push_back(nums[j]);
            v.push_back(temp);
            solve(nums, temp, j + 1, sum);

            temp.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int sum = 0;
        sort(begin(nums),end(nums));
        vector<int>temp;
        v.push_back({});
        solve(nums, temp, 0, 0);
        return v;
    }
};