class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit,
                            vector<int>& worker) {
        vector<pair<int, int>> v;
        for (int i = 0; i < difficulty.size(); i++) {
            v.push_back({difficulty[i], profit[i]});
        }
        sort(begin(v),end(v));
        int maxi=INT_MIN;
        for (int i = 0; i < v.size(); i++) {
            maxi = max(maxi, v[i].second);
            v[i].second = maxi;
        }
        long long sum=0;
        for (int k = 0; k < worker.size(); k++) {

            int i = 0;
            int j = difficulty.size() - 1;
            int maxi=INT_MIN;
            while (i <= j) {
                int mid = i + (j - i) / 2;
                if (v[mid].first > worker[k])
                    j = mid - 1;
                else
                    i = mid + 1;
            }
           if(j>=0)
           sum+=v[j].second;
        }
        return sum;
    }
};