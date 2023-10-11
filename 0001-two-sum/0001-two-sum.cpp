class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
       map<int,int>m;
       for(int i=0;i<n;i++){
         int a=nums[i];
        int  b=target-nums[i];
         if(m.find(b)!=m.end())
         return {m[b],i};
         m[a]=i;
       }
       return {};
    }
};