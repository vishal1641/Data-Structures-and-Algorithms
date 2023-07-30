class Solution {
public:
    bool judgeSquareSum(int c) {

        for(long long i=0;i*i<=c;i++){
            long long k=c-i*i;
            long long sum=sqrt(k);
        if(sum*sum==k)
        return true;
        }
        return false;
    }
};