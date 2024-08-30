class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int>m;int count=0;
        m.insert({0,1});
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(m.find(sum-k)!=m.end())
            count+=m[sum-k];
            m[sum]++;
        }
        return count;
    }
};