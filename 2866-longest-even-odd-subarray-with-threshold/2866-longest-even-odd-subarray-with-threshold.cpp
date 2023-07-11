class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int t) {
       
        int maxi=0,ans=0,count=0;
      for(int i=0;i<nums.size();i++){
          if(nums[i]%2==0&&nums[i]<=t)
           {
          count=1;

          for(int j=i+1;j<nums.size();j++){
              if(nums[j]%2!=nums[j-1]%2&&nums[j]<=t)
              count++;
             else{
             
break;
             }
          }

          }
          maxi=max(maxi,count);
      }

       return maxi;
      
    }
};