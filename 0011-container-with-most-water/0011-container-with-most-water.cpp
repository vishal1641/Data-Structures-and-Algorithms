class Solution {
public:
    int maxArea(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        int ans=0;
        while(i<=j){
            int mini=min(nums[i],nums[j]);
             ans=max(mini*(j-i),ans);
             if(nums[i]<=nums[j]){
                i++;
             }
             else
             j--;
        }
        return ans;
    }
};