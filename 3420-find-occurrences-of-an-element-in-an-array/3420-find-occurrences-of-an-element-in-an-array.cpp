class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries,
                                     int x) {
        map<int, vector<int>> m;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == x)
                m[x].push_back(i);
        }
        vector<int> v;
        vector<int> v1 = m[x];
        for (int i = 0; i < queries.size(); i++) {
            if (v1.size() >= queries[i]) {
                v.push_back(v1[queries[i] - 1]);
            } else
                v.push_back(-1);
        }
        return v;
    }
};