class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int i=0,j=0,n=nums.size();
        int ans=INT_MAX;
        if(n==0||n==1)
        return 0;
        sort(nums.begin(),nums.end());
        while(j<n){

if(j-i+1<k)
j++;
else if(j-i+1==k){
ans=min(ans,nums[j]-nums[i]);
i++;
j++;

}

        }
        return ans;
    }
};