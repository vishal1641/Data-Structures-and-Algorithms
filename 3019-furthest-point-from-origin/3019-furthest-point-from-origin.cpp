class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        // int c=0,b=0,a=0;
        // for(int i=0;i<moves.size();i++){
        //     if(moves[i]=='L')
        //     a++;
        //     else if(moves[i]=='R')
        //         b++;
        //     else
        //         c++;
        // }
        int a=count(moves.begin(),moves.end(),'L');
        int b=count(moves.begin(),moves.end(),'R');
        int c=count(moves.begin(),moves.end(),'_');
        int maxi=max(a,b);
        int ans=maxi-min(a,b)+c;
        return ans;
    }
};