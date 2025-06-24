class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> v;
        for (int i=0; i < nums.size(); i++) {
            if (nums[i] == key)
                v.push_back(i);
        }
        vector<int> ans;
        for (int j = 0; j < nums.size(); j++) {
            for (int i = 0; i < v.size(); i++) {
                if (abs(v[i] - j) <= k){
                    ans.push_back(j);
                    break;}
               
            }}
            return ans;
        }
    };