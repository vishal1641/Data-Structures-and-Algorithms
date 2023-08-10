class Solution {
public:
    bool check(int x1,int y1,int x2,int y2,int x3,int y3){
        return (x3-x2)*(y2-y1)==(x2-x1)*(y3-y2);
    }
    bool checkStraightLine(vector<vector<int>>& a) {
        int n=a.size();
        sort(a.begin(),a.end());
        for(int i=2;i<n;i++){
            int x1=a[i][0],y1=a[i][1];
            int x2=a[i-1][0],y2=a[i-1][1];
            int x3=a[i-2][0],y3=a[i-2][1];
            if(!check(x1,y1,x2,y2,x3,y3))return false;
        }
        return true;
    }
};