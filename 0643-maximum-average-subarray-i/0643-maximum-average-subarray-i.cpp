class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size(),sum=0;
        int i=0,j=0;
        int ans=INT_MIN;
     
        while(j<n){
            sum=sum+nums[j];
           
            if((j-i+1)==k){
              
                ans=max(ans,sum);
                sum=sum-nums[i];
                i++;
            }
            j++;
        }
        return ((double)ans/k);
    }
};