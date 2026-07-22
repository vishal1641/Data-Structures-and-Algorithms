class Solution {
public:
    int minMirrorPairDistance(vector<int>& nums) {
        map<int, int> m;
        int mini=INT_MAX;
      
        for (int i = 0; i < nums.size(); i++) {
            int rem = 0, rev = 0;
            for (int k = nums[i]; k > 0; k = k / 10) {
                rem = k % 10;
                rev = rev * 10 + rem;
            }
            if (m.find(nums[i]) != m.end()) {
                mini = min(mini, i-m[nums[i]]);
            } 
                m[rev] = i;
            
        }
        return mini!=INT_MAX?mini:-1;
    }
};