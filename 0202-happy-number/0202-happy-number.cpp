class Solution {
public:
    bool isHappy(int n) {
        int rem=0;
        long long sum=0;

        while(n!=1&&n!=4)
        {
            for(int i=n;i>0;i=i/10){
                rem=i%10;
                sum+=rem*rem;
            }
            n=sum;
            sum=0;
        }
       
        return n==1;

    }
};