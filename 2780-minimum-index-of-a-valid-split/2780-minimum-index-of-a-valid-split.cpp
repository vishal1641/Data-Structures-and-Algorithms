class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        unordered_map<int, int> m;
        vector < pair<int, int>> v1, v2;
        int maxi=0;
        int element=0;
        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]]++;
            if (m[nums[i]] > maxi) {
                maxi = m[nums[i]];
                element=nums[i];
            }
                v1.push_back({element, maxi});
        }
        m.clear();
        maxi = 0;
        for (int i = nums.size() - 1; i >= 0; i--) {
            m[nums[i]]++;
            if (m[nums[i]] > maxi){
                maxi = m[nums[i]];
                element=nums[i];}
            v2.push_back({element, maxi});
        }
        reverse(begin(v2),end(v2));
        for (int i = 0; i < v1.size() - 1; i++) {
            if (v1[i].first == v2[i + 1].first) {
                if (v1[i].second *2> (i + 1)  &&
                    v2[i + 1].second *2> (nums.size() - (i + 1)))
                    return i;
            }
            else
            continue;
        }
        return -1;
    }
};