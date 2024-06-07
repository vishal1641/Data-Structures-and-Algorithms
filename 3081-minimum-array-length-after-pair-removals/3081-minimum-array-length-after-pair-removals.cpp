class Solution
{
    public:
        int minLengthAfterRemovals(vector<int> &nums)
        {
            int ans = nums.size();
            int j=nums.size()/2;
            for (int i = 0; i < nums.size() / 2&&j<nums.size(); i++)
            {
                if (nums[i] < nums[j])
                {
                    j++;
                    ans -= 2;
                }
                else{
                    i--;
                    j++;
                }
            }
            return ans;
        }
};