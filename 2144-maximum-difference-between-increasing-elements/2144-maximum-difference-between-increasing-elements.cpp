class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        vector<int>a(nums.size());
        int maxi=nums[nums.size()-1];
        for(int i=nums.size()-1;i>=0;i--){
maxi=max(nums[i],maxi);
a[i]=maxi;
        }
        int maxi2=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<a[i+1])
            maxi2=max(maxi2,a[i+1]-nums[i]);
        } if(maxi2!=0)
        return maxi2;
        else
        return -1;
    }
};