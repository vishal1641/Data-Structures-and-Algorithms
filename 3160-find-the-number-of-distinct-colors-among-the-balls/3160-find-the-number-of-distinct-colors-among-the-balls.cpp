class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& nums) {

        unordered_map<int, int> m;
        unordered_map<int, int> m1;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            if (m.find(nums[i][0]) == m.end()) {
                m[nums[i][0]] = nums[i][1];
                m1[(nums[i][1])]++;
                ans.push_back(m1.size());
            } else {
                m1[m[nums[i][0]]]--;
                if (m1[m[nums[i][0]]] == 0)
                    m1.erase(m[nums[i][0]]);
                m1[nums[i][1]]++;
                m[nums[i][0]] = nums[i][1];

                ans.push_back(m1.size());
            }
        }
        return ans;
    }
};