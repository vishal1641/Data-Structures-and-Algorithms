class Solution {
public:
    int ans = 0;

    void solve(vector<int>& nums, int i, int k, vector<int>& temp) {

        for (int j = i; j < nums.size(); j++) {

            bool ok = true;

            for (int x : temp) {
                if (abs(x - nums[j]) == k) {
                    ok = false;
                    break;
                }
            }

            if (!ok)
                continue;

            temp.push_back(nums[j]);

            ans++;                  

            solve(nums, j + 1, k, temp);

            temp.pop_back();
        }
    }

    int beautifulSubsets(vector<int>& nums, int k) {
        vector<int> temp;
        solve(nums, 0, k, temp);
        return ans;
    }
};