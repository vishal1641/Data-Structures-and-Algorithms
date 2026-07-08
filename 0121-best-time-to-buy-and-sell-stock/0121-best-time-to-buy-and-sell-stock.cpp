class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi = 0, maxi1 = 0;
vector<int>v(prices.size(),0);
        for (int i = prices.size() - 1; i >= 0; i--) {
            if (maxi < prices[i] || maxi == 0)
                maxi = prices[i];
                v[i]=maxi;
        }
        for(int i=0;i<prices.size();i++){
            maxi1=max(maxi1,abs(prices[i]-v[i]));
        }
        return maxi1 ;
    }
};