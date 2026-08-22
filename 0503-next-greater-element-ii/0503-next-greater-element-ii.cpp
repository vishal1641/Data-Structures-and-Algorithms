class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {

        vector<int> ans(nums.size(), -1);
        stack<int> s;

        for (int i = 2 * nums.size() - 1; i >= 0; i--) {

            int index = i % nums.size();

            if (s.size() == 0) {
                if (i < nums.size())
                    ans[index] = -1;
            }

            else if (s.size() > 0 && s.top() > nums[index]) {

                if (i < nums.size())
                    ans[index] = s.top();
            }

            else if (s.size() > 0 && s.top() <= nums[index]) {

                while (s.size() > 0 && s.top() <= nums[index]) {
                    s.pop();
                }

                if (i < nums.size()) {
                    if (s.size() == 0)
                        ans[index] = -1;
                    else
                        ans[index] = s.top();
                }
            }

            s.push(nums[index]);
        }

        return ans;
    }
};