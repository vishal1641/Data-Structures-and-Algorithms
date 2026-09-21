class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long  x = 1LL*m * k;
        if (bloomDay.size() < x)
            return -1;
        int i = *min_element(bloomDay.begin(), bloomDay.end());
        int j = *max_element(bloomDay.begin(), bloomDay.end());
        while (i <= j) {
            int mid = i + (j - i) / 2;
            int count = 0, count1= 0;
            for (int i = 0; i < bloomDay.size(); i++) {
                if (bloomDay[i] <= mid)
                    count++;
                else {
                   
                        count1+=count/k;
                        count=0;
                }
            }
            
            count1+=count/k;
            if (count1 >= m)
                j = mid - 1;
            else
                i = mid + 1;
        }
        return i;
    }
};