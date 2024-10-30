class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& nums, int m, int n) {
        vector<vector<int>> v;
        if(m*n!=nums.size())
        return v;
     
        for (int i = 0; i < m; i++) {
            vector<int> temp;
            int x = (i)*n;
            int a = 1;
            for (int j = x; j<nums.size()&&a <= n; j++) {
                temp.push_back(nums[j]);
                a++;
               
            }
            v.push_back(temp);
        }
     
        return v;
       
    }
};