class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int maxi = 0;
        for (int i = 0; i < nums.size(); i++) {
            unordered_map<int, int> m;
            int odd=0,even=0;
            for (int j = i; j < nums.size(); j++) {
                if (nums[j] % 2 == 0 && m.find(nums[j]) == m.end()) {
                    m[nums[j]]++;
                    even++;
                } else if (nums[j] % 2 != 0 && m.find(nums[j]) == m.end()) {
                    m[nums[j]]++;
                    odd++;
                }
                if (odd == even)
                    maxi = max(maxi, j - i + 1);
            }
        }
    
    return maxi;
}
}
;