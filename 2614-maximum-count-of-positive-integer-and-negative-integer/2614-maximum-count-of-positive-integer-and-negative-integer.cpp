class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int count=0,count1=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0)
            count++;
            if(nums[i]==0)
            count1++;
        }
        return (nums.size()-count-count1)>count?nums.size()-count-count1:count;
    }
};