class Solution {
public:
    int sumOfBeauties(vector<int>& nums) {
        vector<int>a(nums.size()),b(nums.size());
        int maxi=nums[0];
        int mini=nums[nums.size()-1];
        for(int i=0;i<nums.size();i++){
            maxi=max(nums[i],maxi);
            a[i]=maxi;
        }
         for(int i=nums.size()-1;i>=0;i--){
            mini=min(nums[i],mini);
            b[i]=mini;
        }
        int sum=0;
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i]>a[i-1]&&nums[i]<b[i+1])
            sum+=2;
            else if(nums[i]>nums[i-1]&&nums[i+1]>nums[i])
            sum+=1;
        }
        return sum;
    }
};