class Solution {
public:
    int minGroups(vector<vector<int>>& nums) {
        sort(begin(nums), end(nums));
        priority_queue<int, vector<int>, greater<int>> p;
        for (int i = 0; i < nums.size(); i++) {
            if (p.size() > 0 && p.top() < nums[i][0])
                p.pop();

            p.push(nums[i][1]);
        }
        return p.size();
    }
};