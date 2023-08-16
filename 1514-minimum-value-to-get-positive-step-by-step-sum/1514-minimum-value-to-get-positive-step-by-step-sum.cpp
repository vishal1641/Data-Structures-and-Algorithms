class Solution {
public:
    int minStartValue(vector<int>& nums) {
       vector<int>v(nums.size());
       int sum=0;
       for(int i=0;i<nums.size();i++){
           sum+=nums[i];
v.push_back(sum);
       } 
       sort(v.begin(),v.end());
       return abs(v[0])+1;
    }
};