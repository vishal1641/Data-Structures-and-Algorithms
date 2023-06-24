class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
     int n=nums.size(),i=0,j=0;
        long long pro=1;
        int ans=0;
        
    for(;j<n;j++){
        pro*=nums[j];
        for(;pro>=k&&i<=j;i++){
            pro=pro/nums[i];
        }
        ans+=j-i+1;
    }


        
        return ans;
    }
};