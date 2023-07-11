class Solution {
public:
void bottom(vector<vector<int>>&grid,int i,int j,int m,int n ,set<int>&set2){
    while(i<m&&j<n){
        set2.insert(grid[i][j]);
        i++;j++;
    }
}
void top(vector<vector<int>>&grid,int i,int j,set<int>&set1){
    while(i>=0&&j>=0){
        set1.insert(grid[i][j]);
        i--;j--;
    }
}
    vector<vector<int>> differenceOfDistinctValues(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        set<int>set1;
        set<int>set2;
        vector<vector<int>>ans(m,vector<int>(n,0));
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
               bottom(grid,i+1,j+1,m,n,set2);
               top(grid,i-1,j-1,set1);
               ans[i][j]=labs(set1.size()-set2.size());
               set1.clear();set2.clear();
            }
        }
        return ans;
    }
};