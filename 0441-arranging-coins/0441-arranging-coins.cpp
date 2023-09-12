class Solution {
public:
    int arrangeCoins(int n) {
        long long sum=0;
        for(int i=1;i>0;i++){
            sum+=i;
            if(sum==n)
            return i;
            if(sum>n)
            return i-1;
        }
        return -1;
    }
};