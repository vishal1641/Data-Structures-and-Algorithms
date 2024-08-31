class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int sum) {
        sort(begin(nums), end(nums));
        vector<vector<int>>ans;
        for (int i = 0; i < nums.size(); i++) {
            if(i>0&&nums[i]==nums[i-1])
            continue;
            for (int j = i + 1; j < nums.size(); j++) {
                if(j>i+1&&nums[j]==nums[j-1])
                continue;
                int k = j + 1;
                int l = nums.size() - 1;
                while (k < l) {
                    long long fourth =(long long) nums[i] + nums[j] + nums[k] + nums[l];
                    if (fourth < sum)
                        k++;
                    else if (fourth > sum)
                        l--;
                    else {
                        vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                        ans.push_back(temp);
                        k++;
                        l--;
                        while (k < l && nums[k] == nums[k - 1])
                            k++;
                        while (l < nums.size() && nums[l] == nums[l + 1])
                            l--;
                    }
                }
            }
        }
        return ans;
    }
};