class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int p=1,s=1,ans=INT_MIN;
        for(int i=0;i<n;i++){
            if(p==0)
            p=1;
            if(s==0)
            s=1;
            p*=nums[i];
            s*=nums[n-i-1];
            ans=max(ans,max(p,s));
        }
        return ans;
    }
};