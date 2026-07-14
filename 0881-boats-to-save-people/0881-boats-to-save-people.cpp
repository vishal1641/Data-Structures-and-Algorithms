class Solution {
public:
    int numRescueBoats(vector<int>& nums, int limit) {
        sort(begin(nums),end(nums));
        int i=0,j=nums.size()-1;
        int count=0;
        while(i<=j){
            if(nums[i]+nums[j]<=limit){
            count++;
            i++;j--;}
            else if(nums[i]+nums[j]>limit){
                count+=1;
                j--;
            }
        }
        return count;
    }
};