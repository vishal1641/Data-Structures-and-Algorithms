class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        vector<long long>v;
        long long maxi=0;
        long long sum=0;
        for(int i=0;i<nums.size();i++){
           maxi=max((long long)nums[i],maxi);
            sum+=maxi+nums[i];
            v.push_back(sum);
        }
       
       
        return v;
    }
};