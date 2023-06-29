class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
       int i=0,j=0,n=nums.size(),maxi=0;
       int sum=0;
       unordered_map<int ,int >m;
       for(;j<n;j++){
m[nums[j]]++;
sum+=nums[j];

for(;m[nums[j]]>1;i++){
sum-=nums[i];

m[nums[i]]--; 
}
maxi=max(maxi,sum);
       } 
       return maxi;
    }
};