class Solution {
public:
    int maxJump1(vector<int>& stones,int a) {
        if(a<=1)
        return stones[a]-stones[0];
        int b=maxJump1(stones,a-1);
        int c=stones[a]-stones[a-2];
        return max(b,c);
    }
     int maxJump(vector<int>& stones) {
         int n=stones.size();
         return maxJump1(stones,n-1);}
};