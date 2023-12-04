class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& nums) {
        sort(begin(nums),end(nums));
        if(nums[0]!=1)
        nums[0]=1;
        for(int i=1;i<nums.size();i++){
            if(abs(nums[i]-nums[i-1])>1)
            nums[i]=nums[i-1]+1;
        }
        //  sort(begin(nums),end(nums));
         return nums[nums.size()-1];
    }
};