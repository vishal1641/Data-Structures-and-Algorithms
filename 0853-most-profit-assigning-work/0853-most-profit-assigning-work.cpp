class Solution
{
    public:
        int maxProfitAssignment(vector<int> &difficulty, vector<int> &profit, vector< int > &worker)
        {
            int ans=0,res=0,j=0;
            vector<pair<int, int>> v;
            for (int i = 0; i < difficulty.size(); i++)
                v.push_back({ difficulty[i],
                    profit[i] });
            sort(begin(v), end(v));
            sort(begin(worker),end(worker));
            for (int i = 0; i < worker.size(); i++)
            {

                while (j < v.size() && worker[i] >= v[j].first)
                {
                    ans = max(ans, v[j].second);
                    j++;
                }
                res += ans;
            }
        return res;
}
};