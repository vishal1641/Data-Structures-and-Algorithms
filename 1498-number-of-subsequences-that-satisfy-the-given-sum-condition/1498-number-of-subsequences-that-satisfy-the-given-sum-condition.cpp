class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        int i=0,j=nums.size()-1;
        int mod=1e9+7;
        sort(begin(nums),end(nums));
       int count=0;
       vector<int>v(nums.size(),1);
       for(int i=1;i<nums.size();i++){
        v[i]=(v[i-1]*2)%mod;
       }
        while(i<=j){
            if(nums[i]+nums[j]<=target){
            count=(count+v[j-i])%mod;
            i++;}
            else if(nums[i]+nums[j]>target){
                j--;
            }

        }
        return count;
    }
};