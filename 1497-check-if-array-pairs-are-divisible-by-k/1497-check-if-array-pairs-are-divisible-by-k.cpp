class Solution {
public:
    bool canArrange(vector<int>& nums, int k) {
        map<int, int> m;
        for (int i = 0; i < nums.size(); i++) {
            int x = ((nums[i] % k) + k) % k;
            if (x == 0 && m.find(0) != m.end())
                m.erase(x);
            else if (m.find(k - x) == m.end()) {
                m[x]++;
            } else if (m.find(k - x) != m.end()) {
                if (m[k - x] > 0)
                    m[k - x]--;
                if (m[k - x] == 0)
                    m.erase(k - x);
            }
        }
        if (m.size() == 0)
            return true;
        else
            return false;
    }
};