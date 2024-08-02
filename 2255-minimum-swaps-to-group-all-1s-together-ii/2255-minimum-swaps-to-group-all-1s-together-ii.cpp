class Solution {
public:
    int minSwaps(vector<int>& nums) {

        int n = nums.size();
        int target = 0;

        for(int i=0;i<n;i++) {
            if(nums[i]==1) {
                target++;
            }
        }

        if(target == 0) {
            return 0;
        }

        for(int i=0;i<n;i++) {
            nums.push_back(nums[i]);
        }

        n*=2;

        int ans = INT_MAX;

        int i=0,j=0;
        int cnt = 0;
        while(j<n) {
            if(j-i+1<target) {
                if(nums[j]==1) {
                    cnt++;
                }
                j++;
            } else if(j-i+1==target) {
                if(nums[j]==1) {
                    cnt++;
                }

                ans = min(ans, target-cnt);

                if(nums[i]==1) {
                    cnt--;
                }
                i++;
                j++;
            }
        }
        return ans;

    }
};