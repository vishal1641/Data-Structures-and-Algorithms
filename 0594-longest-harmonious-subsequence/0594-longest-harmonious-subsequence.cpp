class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>k;
        k=nums;
        reverse(k.begin(),k.end());
        int maxi=0;
        for(int i=0;i<nums.size();i++){
           int w=find(k.begin(),k.end(),nums[i]+1)-k.begin();
           int cnt=nums.size()-w;
           maxi=max(maxi,cnt-i);
        }
        return maxi;
    }
};