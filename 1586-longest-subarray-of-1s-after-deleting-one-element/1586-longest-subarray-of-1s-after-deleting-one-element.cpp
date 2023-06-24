class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size(),maxi=0;
   int i=0,j=0,count=0;
  for(;j<n;j++){
      if(nums[j]==0)
      count++;
      for(;count>1;i++){
          if(nums[i]==0)
          count--;
      }
      
      maxi=max(maxi,j-i+1);
  }

       
   return maxi-1;
       
    }
};