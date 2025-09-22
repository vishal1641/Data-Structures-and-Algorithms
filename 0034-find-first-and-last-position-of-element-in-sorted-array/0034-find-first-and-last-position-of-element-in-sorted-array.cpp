class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0,high=n-1;
        int ans=0-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                ans=mid;
                high=mid-1;
            }
            if(nums[mid]>target){
                high=mid-1;
            }
            if(nums[mid]<target)
            low=mid+1;
        }
        low=0;
        high=n-1;
        int ans1=0-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                ans1=mid;
                low=mid+1;
            }
            if(nums[mid]>target){
                high=mid-1;
            }
            if(nums[mid]<target)
            low=mid+1;
        }
        return {ans,ans1};
    }
};