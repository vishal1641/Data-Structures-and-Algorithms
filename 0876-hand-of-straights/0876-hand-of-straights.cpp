class Solution
{
    public:
        bool isNStraightHand(vector<int> &nums, int g)
        {
            if (nums.size() % g != 0)
                return false;
            map<int, int> m;
            for (int i = 0; i < nums.size(); i++)
                m[nums[i]]++;
            while (m.size() > 0)

            {
                int a = m.begin()->first;
                for (int i = a; i < a + g; i++)
                {
                    if (m.find(i) != m.end())
                    {
                        m[i]--;
                        if (m[i] == 0)
                            m.erase(i);
                    }
                    else return false;
                }
            }
            return true;
        }
};