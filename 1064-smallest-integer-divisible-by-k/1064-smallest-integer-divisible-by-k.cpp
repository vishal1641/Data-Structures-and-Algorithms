class Solution {
public:
    int smallestRepunitDivByK(int k) {
        int n=0;
        if(k%5==0||k%2==0)
        return -1;
        for(int i=1;i<=k;i++){
             n=(n*10+1)%k;
            if(n==0)
            return i;
        }
        return -1;
    }
};