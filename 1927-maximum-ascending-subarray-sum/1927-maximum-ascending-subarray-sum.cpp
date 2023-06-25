class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        nums.push_back(-1);
       int n=nums.size();
       int i=0,j=0,sum=0,ans=INT_MIN;
       if(nums.size()==1)
       return nums[0];

      
               for(int i=0;i<n-1;i++){
                   if(nums[i+1]>nums[i])
                   sum+=nums[i];

                   else{
                       sum=sum+nums[i];
                       ans=max(ans,sum);
                       sum=0;
                   }
               }
       return ans;
    }
};