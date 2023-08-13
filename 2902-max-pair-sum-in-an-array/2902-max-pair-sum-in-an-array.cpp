class Solution {
public:
    int maxSum(vector<int>& nums) {
        int maxi=0,sum=0;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){

string k=to_string(nums[i]);
string m=to_string(nums[j]);
sort(k.begin(),k.end());
sort(m.begin(),m.end());
if(k[k.size()-1]==m[m.size()-1])
sum=nums[i]+nums[j];
maxi=max(maxi,sum);
            }
        }
        if(maxi==0)
        return -1;
        return maxi;
    }
};