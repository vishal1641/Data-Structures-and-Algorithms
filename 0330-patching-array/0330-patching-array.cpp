
class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        long long sum = 0, cnt = 0, i = 0;
        while(sum<n){
            if(i<nums.size()&&nums[i]<=sum+1){
                sum += nums[i++];
            }else{
                cnt++;
                sum += sum+1;
            }
        }
        return cnt;
    }
};