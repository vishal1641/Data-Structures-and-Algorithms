class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items,
                              vector<int>& queries) {
        sort(begin(items), end(items));
        vector<int> ans;
        int maxi = INT_MIN;
        for (int i = 0; i < items.size(); i++) {
            maxi = max(maxi, items[i][1]);
            items[i][1] = maxi;
        }
        for (int i = 0; i < queries.size(); i++) {
            int a = queries[i];
            int l = 0;
            int j = items.size() - 1;
            int result = INT_MIN;
            while (l <= j) {
                int mid = l + (j - l) / 2;
                if (items[mid][0] > a) {
                    j = mid - 1;
                } else {
                   result=items[mid][1];
                    l = mid + 1;
                }
            }
            if (result != INT_MIN)
                ans.push_back(result);
            else
                ans.push_back(0);
        }
        return ans;
    }
};