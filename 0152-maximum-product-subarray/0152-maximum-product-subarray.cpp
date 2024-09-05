#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();

        if (n == 0)
            return 0;

        vector<int> a(n, 1);
        vector<int> b(n, 1);

        int x = 1;
        for (int i = 0; i < n; i++) {
            x *= nums[i];
            a[i] = x;
            if (x == 0)
                x = 1;
        }

        x = 1;
        for (int i = n - 1; i >= 0; i--) {
            x *= nums[i];
            b[i] = x;
            if (x == 0)
                x = 1;
        }
        int z = 1;
        for (int i = 0; i < nums.size(); i++) {
            z = z * nums[i];
        }
        int maxi = nums[0];
        for (int i = 0; i < n; i++) {
            maxi = max(maxi, a[i]);
            maxi = max(maxi, b[i]);
            if (i > 0)
                maxi = max(maxi, z);
        }

        return maxi;
    }
};
