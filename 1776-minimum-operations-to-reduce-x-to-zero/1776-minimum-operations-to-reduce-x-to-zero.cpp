class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
      int i=0,j=0,n=nums.size(),ans=0,w=0;
      int sum=accumulate(nums.begin(),nums.end(),0);
      int k=sum-x;
      if(k==0)
      return n;
      if(k<0)
      return -1;
      for(;j<n;j++){
w+=nums[j];
for(;w>k;i++){
    w=w-nums[i];
} if(w==k)
ans=max(ans,j-i+1);
      }
      if(ans!=0)
      return n-ans;
      else
      return -1;
    }
};