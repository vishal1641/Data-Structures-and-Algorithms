class Solution {
public:
     int binarySearch(vector<int>&nums, int target, int l,int r) {
     
        int start=l;
        int end=r;
      
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target){
                return mid;
            }else if(nums[mid]<target){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
        return -1;
    }

    int findMin(vector<int> &nums){
        int n=nums.size();
         int low=0;
        int high=n-1;
        
        while(low<=high){
            if(nums[low]<=nums[high]){
                return low;
            }
            int mid=low+(high-low)/2;
            int next=(mid+1)%n;
            int prev=(mid+n-1)%n;
            
            if(nums[mid]<=nums[next] and nums[mid]<=nums[prev]){
                return mid;
            }
            else if(nums[low]<=nums[mid]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return -1;
	
    } 
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int min_index=findMin(nums);
        int a1=binarySearch(nums,target,0,min_index-1);
        int a2=binarySearch(nums,target,min_index,n-1);
        if(a1==-1)return a2;
        else 
        return a1;
    }
};