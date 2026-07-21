class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();
        int x = 1;
        int ans = 0;
        while (n > 0) {
            if (n >= 8)
                ans += 8 * x;
            else
                ans += n * x;
            x++;
            n = n - 8;
        }
        return ans;
    }
};