class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0)
                nums[i] = -1;
        }
        map<int, int> m;
        int maxi=0,sum=0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            if (sum == 0) {
                maxi = i + 1;
            } else {
                if (m.find(sum) != m.end()) {
                    maxi = max(maxi, i-m[sum]);
                }
            }
            if (m.find(sum) == m.end())
                m[sum] = i;
        }
        return maxi;
    }
};