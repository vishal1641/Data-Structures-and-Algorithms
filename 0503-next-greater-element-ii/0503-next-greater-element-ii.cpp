class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(n, -1);
        stack<int>s;

        for (int i = 2 * nums.size() - 1; i >= 0; i--) {
            int index = i % n;
            if (s.size() == 0) {
                v[index] = -1;
            } else if (s.size() > 0 && nums[index] < s.top()) {
                v[index] = s.top();

            } else if (s.size() > 0 && nums[index] >= s.top()) {
                while (s.size() > 0 && nums[index] >= s.top())
                    s.pop();
                if (s.size() == 0)
                    v[index] = -1;
                else
                v[index] = s.top();
            }
            s.push(nums[index]);
        }
        return v;
    }
};