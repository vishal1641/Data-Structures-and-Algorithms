class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int a=INT_MAX,b=INT_MIN,c=INT_MAX,d=INT_MIN;
        int count=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
if(grid[i][j]==1){
    count++;
a=min(a,i);
b=max(b,i);}
if(grid[i][j]==1){
c=min(c,j);
d=max(d,j);
}

            }
        }
        if(count==0)
        return 0;
        if(count==1)
        return 1;
        return ((d-c)+1)*((b-a)+1);
    }
};