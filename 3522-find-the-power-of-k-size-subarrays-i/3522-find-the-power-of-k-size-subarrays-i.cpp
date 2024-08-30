class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        vector<int> v;
        int j;
        for (int i = 0; i < nums.size() - k + 1; i++) {
            int count = 0;
           int maxi=0;
            for (j = i; j < i + k - 1; j++) {
                if (nums[j] + 1 != nums[j + 1]) {

                    count++;
                    v.push_back(-1);
                    break;
                }
            }
            if (count == 0) {
                maxi = nums[j];
                v.push_back(maxi);
            }
        }
        return v;
    }
};