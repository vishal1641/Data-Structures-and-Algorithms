class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        vector<int>v;
        int ans=0;
        if(nums.size()<3)
        return 0;
        for(int i=1;i<=nums.size()-2;i++){
            if(nums[i]-nums[i-1]==nums[i+1]-nums[i])
            ans++;
            else{
                v.push_back(ans+2);
                ans=0;
            }
        }
        if(ans>0)
        v.push_back(ans+2);
        int sum=0;
       if(v.size()>0){
        for(int i=0;i<v.size();i++){
            int a=v[i]-2;
            sum+=(a*(a+1)/2);
        }}
        return sum;
    }
};