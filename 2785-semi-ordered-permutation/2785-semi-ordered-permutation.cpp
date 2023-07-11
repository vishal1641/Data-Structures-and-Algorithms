class Solution {
public:
    int semiOrderedPermutation(vector<int>& nums) {
        int i=find(nums.begin(),nums.end(),1)-nums.begin();
        int j=find(nums.begin(),nums.end(),nums.size())-nums.begin();
        int result;
        if(i<j)
        result=nums.size()-1-j+i;
        else
        result=nums.size()-1-j+i-1;
        return result;
    }
};