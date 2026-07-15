class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(begin(nums),end(nums));
        int j=0;
        int n=nums.size();
        int maxi=0;
        for(int i=0;i<n;i++){
            while(j<n&&nums[j]<=1LL*nums[i]*k){
                j++;
            }
            maxi=max(maxi,j-i);
        }
        return nums.size()-maxi;
    }
};