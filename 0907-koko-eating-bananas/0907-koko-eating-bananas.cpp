class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1, high = *max_element(piles.begin(), piles.end()); 
        int n = piles.size();
        int ans = high; 

        while (l <= high) {
            int mid = (l + high) / 2;
            long long temp = 0;   

            for (int i = 0; i < n; i++) {
                if (piles[i] < mid)
                    temp += 1;
                else if (piles[i] % mid == 0)
                    temp += piles[i] / mid;
                else
                    temp += piles[i] / mid + 1;
            }

            if (temp <= h) {   
                ans = mid;    
                high = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return ans; 
    }
};
