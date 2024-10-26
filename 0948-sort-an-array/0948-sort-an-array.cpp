class Solution {
public:
    void merge(int s, int mid, int e, vector<int>& v) {
        vector<int> ans;
        int i = s; // Start from 's' for the left half
        int j = mid + 1; // Start from 'mid + 1' for the right half

        while (i <= mid && j <= e) {
            if (v[i] <= v[j]) {
                ans.push_back(v[i]);
                i++;
            } else {
                ans.push_back(v[j]);
                j++;
            }
        }
        while (i <= mid) {
            ans.push_back(v[i]);
            i++;
        }
        while (j <= e) {
            ans.push_back(v[j]);
            j++;
        }
        for (int k = 0; k < ans.size(); k++) {
            v[s + k] = ans[k]; 
        }
    }

    void solve(int s, int e, vector<int>& v) {
        if (s >= e)
            return;
        int mid = s + (e - s) / 2;
        solve(s, mid, v);
        solve(mid + 1, e, v);
        merge(s, mid, e, v);
    }

    vector<int> sortArray(vector<int>& nums) {
        int e = nums.size() - 1;
        solve(0, e, nums);
        return nums;
    }
};
