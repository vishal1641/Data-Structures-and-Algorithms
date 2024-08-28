class Solution {
public:
    void solve(vector<int>& nums, vector<vector<int>>& ans, int i, vector<int>& temp) {
       
            ans.push_back(temp);
            
        

        for (int j = i; j < nums.size(); j++) {
            temp.push_back(nums[j]);      // Include the current element
            solve(nums, ans, j + 1, temp); // Recur with the next element
            temp.pop_back();              // Backtrack to explore subsets without the current element
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        solve(nums, ans, 0, temp);
        return ans;
    }
};
