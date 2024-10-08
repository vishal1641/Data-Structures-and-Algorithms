class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
       unordered_map<int,int>m;
        sort(begin(nums),end(nums));
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(m.find(nums[i]-k)!=m.end())
            count+=m[nums[i]-k];
            m[nums[i]]++;
        }
        return count;
    }
};