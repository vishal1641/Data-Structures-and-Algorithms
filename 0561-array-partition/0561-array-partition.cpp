class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int maxi=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i+=2){
int x=min(nums[i],nums[i+1]);
maxi=maxi+x;
        }
        return maxi;
    }
};