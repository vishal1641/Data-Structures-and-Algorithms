class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0,j=0,mini=INT_MAX,sum=0,length=0;
        int n=nums.size();
        for(;j<n;j++){
            sum+=nums[j];
            for(;sum>=target;i++){
                 length=j-i+1;
                 mini=min(mini,length);
                 sum=sum-nums[i];
            }

        }
        return mini!=INT_MAX?mini:0;
    }
};