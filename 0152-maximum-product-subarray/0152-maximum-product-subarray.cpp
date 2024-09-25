class Solution {
public:
    int maxProduct(vector<int>& nums) {
        vector<int> a;
        vector<int> b;
        int x = 1;
        for (int i = 0; i < nums.size(); i++) {
            x = x * nums[i];
            a.push_back(x);
            if(x==0)
            x=1;
        }
         x = 1;
        for (int i = nums.size() - 1; i >= 0; i--) {
            x = x * nums[i];
            b.push_back(x);
            if(x==0)
            x=1;
        }
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
        maxi=max({maxi,b[i],a[i],nums[i]});
        }
        return maxi;
    }
};