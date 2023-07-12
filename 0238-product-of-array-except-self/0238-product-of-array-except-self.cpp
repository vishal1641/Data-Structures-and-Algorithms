class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n =nums.size();
        vector<int>left(n);
        int p=1;
        for(int i=0;i<n;i++){
            p=p*nums[i];
            left[i]=p;
        } p=1;
        for(int i=n-1;i>=0;i--){
if(i==n-1)
left[i]=left[i-1];
        
        if(i==0)
        left[i]=p;
        
        else
 left[i]=p*left[i-1];
        p=p*nums[i];
        }
        return left;
    }
};