class Solution {
public:
    int static cmp(vector<int> a, vector<int> b)
    {
        return a[1] < b[1];
    }
    int findLongestChain(vector<vector<int>>& pairs) 
    {
        sort(pairs.begin(), pairs.end(), cmp);
        int y = pairs[0][1];
        int ans = 1;
        for(int i = 1; i < pairs.size(); i++)
        {
            if(pairs[i][0] > y)
            {
                ans++;
                y = pairs[i][1];
            }
        }
        return ans;
    }
};