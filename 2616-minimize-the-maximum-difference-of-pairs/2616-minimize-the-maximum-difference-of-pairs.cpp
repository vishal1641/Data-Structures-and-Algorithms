class Solution {
public:
    int minimizeMax(vector<int>& nums, int p) {
        int i = 0;
        int j = *max_element(nums.begin(), nums.end()) -
                *min_element(nums.begin(), nums.end());
        sort(begin(nums), end(nums));
int result =-1;
        while (i <= j) {
            int mid = i + (j - i) / 2;
            int count=0;
            for (int i = 0; i < nums.size() - 1; i++) {
                if (nums[i + 1] - nums[i] <= mid) {
                    count++;
                    i++;
                }
            }
            if(count>=p)
            {
                result=mid;
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
        return result;
    }
};