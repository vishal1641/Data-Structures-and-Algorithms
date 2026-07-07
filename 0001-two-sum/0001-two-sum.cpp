class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        unordered_map<int, int> m;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
           
            if (m.find(-nums[i] + target) != m.end()) {
                v.push_back({m[ target-nums[i]]});
                v.push_back(i);
                break;
            }
            m[nums[i]]=i;
        }
        return v;
    }
};