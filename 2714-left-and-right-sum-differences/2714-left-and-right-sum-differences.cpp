class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>v(nums.size());
        vector<int>k(nums.size()),ans(nums.size());
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(i==0)
            {
            sum+=nums[i];
            v[i]=0;
            }
            else
            {
            v[i]=sum;
                sum=sum+nums[i];
                }
        }
        sum=0;
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(i==nums.size()-1)
            {
            k[i]=0;sum+=nums[i];
            }
            else
            {
                k[i]=sum;
                sum+=nums[i];
            }
        }
        for(int i=0;i<v.size();i++)
        {
            ans[i]=abs(v[i]-k[i]);
        }
        return ans;
    }
};