class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int count=1,maxi=1;
    
       for(int i=0;i<nums.size()-1;i++){
           if(nums[i]<nums[i+1])
           count++;
           
           else{
           maxi=max(count,maxi);
           count=1;}
       } 
      maxi=max(maxi,count);
       return maxi;
    }
};