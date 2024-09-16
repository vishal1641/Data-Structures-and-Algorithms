class Solution {
public:
    int findMinDifference(vector<string>& nums) {
        vector<int> p;
        for (int i = 0; i < nums.size(); i++) {
            int a = stoi(nums[i].substr(0, 2));
            int b = stoi(nums[i].substr(3, 2));
            if (a == 0)
                a = 24;

            p.push_back(a * 60 + b);
        }
        sort(begin(p), end(p));
        int mini = INT_MAX;
        for (int i = 0; i < p.size() - 1; i++) {
           
            mini = min(mini, p[i + 1] - p[i]);
        }
        int wrap_around_diff = (1440 - p.back()) + p.front();
        mini = min(mini, wrap_around_diff);
        return mini;
    }
};