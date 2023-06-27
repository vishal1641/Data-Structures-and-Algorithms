class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0,j=0,n=nums.size(),count=0,maxi=0;
        for(;j<n;j++){
if(nums[j]==0)
count++;
for(;count>k;i++){
   
    if(nums[i]==0)
    count--;
}
maxi=max(j-i+1,maxi);

        }
        return maxi;
    }
};