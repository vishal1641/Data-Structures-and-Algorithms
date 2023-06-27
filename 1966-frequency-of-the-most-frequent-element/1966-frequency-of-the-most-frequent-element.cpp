class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
       int  n=nums.size();
       long long sum=0;
       int i=0,j=0,ans=0;
       sort(nums.begin(),nums.end());
     
for(;j<n;j++){
    sum+=nums[j];
    for(;(long )nums[j]*(j-i+1)-sum>k;i++)
    sum=sum-nums[i];
    ans=max(j-i+1,ans);
}
      return ans; 
    }
};