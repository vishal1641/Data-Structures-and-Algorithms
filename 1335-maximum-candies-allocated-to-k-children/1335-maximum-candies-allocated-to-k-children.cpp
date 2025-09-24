class Solution {
public:
    int maximumCandies(vector<int>& nums, long long k) {
        int a = 1;
        int b = *max_element(begin(nums), end(nums));
      
        long long ans=0;
          
        while (a <= b) {
            long long mid = (a + b) / 2;
           long long count=0;
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] >= mid) {
                    count+=nums[i]/mid;
                }
            }
            if (count >= k){
                ans=mid;
                a = mid + 1;}
            else
                b= mid -1;
        }
        return ans;
    }
};