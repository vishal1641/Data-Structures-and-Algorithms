class Solution {
public:
    int minOperations(vector<int>& nums) {
        sort(begin(nums), end(nums));

        vector<int> v;
        for (int i = 0; i < nums.size(); i++) {
            if (v.empty() || v.back() != nums[i]) {
                v.push_back(nums[i]);
            }
        }

        int ans = nums.size();
        int j = 0;
int n=nums.size();
        for (int i = 0; i < v.size(); i++) {
            while (j < v.size() && v[j] < v[i] + nums.size())
                j++;

            ans = min(ans, n- j + i);
        }

        return ans;
    }
};