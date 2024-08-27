class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int maxsum=0;
        int left=0;
        int right=0;
        for(int i=0;i<k;i++){
            left+=cardPoints[i];
        }
       int maxi=left;
        int a=cardPoints.size()-1;
        for(int i=k-1;i>=0;i--){
            left=left-cardPoints[i];
            right=right+cardPoints[a];
            a=a-1;
            maxi=max(maxi,left+right);
        }
        return maxi;
    }
};