class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // merge two sorted array;
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < 0) {
                ans = i;
            }
            if (nums[i] >= 0)
                break;
        }
       
        vector<int> a;
        vector<int> b;
        for (int i = ans; i >= 0; i--) {
            a.push_back(abs(nums[i] * nums[i]));
        }
        for (int j = ans + 1; j < nums.size(); j++) {
            b.push_back(nums[j] * nums[j]);
        }
        int i = 0, j = 0;
        vector<int> kiss;
        while (i < a.size() && j < b.size()) {
            if (a[i] < b[j]) {
                kiss.push_back(a[i]);
                i++;
            } else if (a[i] > b[j]) {
                kiss.push_back(b[j]);
                j++;
            }
            else{
                kiss.push_back(a[i]);
                kiss.push_back(b[j]);
                i++;j++;
            }
        }
        while (i < a.size()) {
            kiss.push_back(a[i]);
            i++;
        }
        while (j < b.size()) {
            kiss.push_back(b[j]);
            j++;
        }
        return kiss;
    }
};