class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int count=1,maxi=1;
       for(int i=0;i<nums.size()-1;i++){
           if(nums[i]<nums[i+1])
           count++;
           
           else{count=1;}
           if(maxi<count){
           maxi=count;}
       } 
       return maxi;
    }
};