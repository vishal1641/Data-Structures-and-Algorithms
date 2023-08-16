class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>v(nums.size()),v1(nums.size());
       
        v[0]=nums[0];
        v1[nums.size()-1]=nums[nums.size()-1];
        for(int i=1;i<nums.size();i++)
        {

v[i]=v[i-1]+nums[i];

        }
     
        for(int i=nums.size()-2;i>=0;i--){

v1[i]=v1[i+1]+nums[i];
        }
        for(int i=0;i<nums.size();i++){
            if(v[i]==v1[i])
            return i;

        }
        return -1;

    }
};