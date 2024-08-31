class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
        sort(begin(nums), end(nums));
        vector<vector<int>> v;
        for (int i = 0; i < nums.size(); i++) {
            if (v.size() == 0 || nums[i][0] > v.back()[1])
                v.push_back(nums[i]);

            else
                if(nums[i][0] <= v.back()[1]) v.back()[1] =
                    max(v.back()[1], nums[i][1]);
        }
        return v;
    }
};