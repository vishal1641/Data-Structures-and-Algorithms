class Solution {
public:
    int numWaterBottles(int a, int b) {
   int full=a;
   int ans=0,x=0,empty=0;
   while(full>=b)
   {
    // ans+=full;
     x=full;
    ans+=full;
    full=full/b;
     empty+=(x%b);
    }
     ans+=full;
     empty+=full;
     while(empty>=b){
        int m=empty/b;
        ans+=m;
        empty=empty%b;
        empty+=m;
     }
     return ans;   
    }
};