class Solution {
public:
    int specialArray(vector<int>& nums) {
        int i=1;int j=*max_element( nums.begin(),nums.end());
        while(i<=j){
            int mid=i+(j-i)/2;
            int count=0;
            for(int i=0;i<nums.size();i++){
                if(nums[i]>=mid)
                count++;
            }
            if(count>mid)
            i=mid+1;
            else  if(count<mid)
            {
           j=mid-1;
            }
            else
            return mid;

        }
        return -1;
    }
};