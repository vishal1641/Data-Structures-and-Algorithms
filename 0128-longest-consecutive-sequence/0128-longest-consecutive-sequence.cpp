class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0)
            return 0;
        
        int maxi = 0;
        unordered_set<int> s(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            if(s.find(nums[i]-1)==s.end()){
                int a = nums[i];
                
int count=1;
                while (s.find(a + 1) != s.end()) {
                    count++;
                    a = a + 1;
                }
                maxi = max(maxi, count);
            }
        }
        return maxi;
    }
};