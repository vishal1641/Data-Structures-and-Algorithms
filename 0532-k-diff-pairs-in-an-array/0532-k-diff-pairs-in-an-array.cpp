class Solution {
public:
    int findPairs(vector<int>& nums, int k) {

        unordered_map<int, int> m;
        int count = 0;

        vector<int> nums1;
        unordered_map<int, int> m1;
        
     
        for (int i = 0; i < nums.size(); i++) {
            m1[nums[i]]++;
        }

        
        for (auto it : m1) {
            if (k == 0 && it.second > 1) {  
                nums1.push_back(it.first);
                nums1.push_back(it.first);
            } else if (k > 0) {            
                nums1.push_back(it.first);
            }
        }

        
        sort(begin(nums1), end(nums1));
        
        
        for (int i = 0; i < nums1.size(); i++) {
            if (m.find(nums1[i] - k) != m.end())
                count += m[nums1[i] - k];
            m[nums1[i]] = 1;
        }

        return count;
    }
};
