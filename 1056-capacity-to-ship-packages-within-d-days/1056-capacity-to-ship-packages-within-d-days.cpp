class Solution {
public:
    int shipWithinDays(vector<int>& nums, int days) {
        int b = accumulate(begin(nums), end(nums), 0);
        int a = *max_element(begin(nums), end(nums));
        int mini=INT_MAX;
        while (a <= b) {
            int mid = (a + b) / 2;
            int sum = 0;
            int day=1;
            for (int i = 0; i < nums.size(); i++) {
                
                if (sum +nums[i]> mid)
                 {
                    day++;
                    sum = 0;
                }
                sum+=nums[i];
            }
            if(day>days){
                a=mid+1;
            }
            else{
                mini=min(mini,mid);
                b=mid-1;
            }
        }
        return mini;
    }
};