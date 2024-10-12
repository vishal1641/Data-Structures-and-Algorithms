class Solution {
public:
    int minGroups(vector<vector<int>>& nums) {
         vector<int> a, b;
        for (int i = 0; i < nums.size(); i++) {
            a.push_back(nums[i][0]);
            b.push_back(nums[i][1]);
        }
        sort(begin(a), end(a));
        sort(begin(b), end(b));
        int i = 0, j = 0;
        int count = 0;
        while (i < a.size()){
            if (a[i] <= b[j])
                i++;
            else {
                count++;
                j++;
                i++;
            }
    }
    return a.size() - count;
        
    }
};