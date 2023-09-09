class Solution {
public:
    int findMin(vector<int>& nums) {
       int start=0,n=nums.size();
       int end=nums.size()-1;
       if(nums[end]>=nums[start])
       return nums[0];
       else
       while(end>=start){
           int mid=(end+start)/2;
           int pre=(mid+n-1)%n;
           int next=(mid+1)%n;
           if(nums[mid]<=nums[pre]&&nums[mid]<=nums[next])
           return nums[mid];
           else if(nums[mid]>nums[end])
           start=mid+1;
           else 
           end=mid-1;
       } 
       return -1;
    }
};