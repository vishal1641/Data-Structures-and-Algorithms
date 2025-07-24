 class Solution {
public:

// void bfs(int i,int j,vector<vector<int>>&vis,vector<vector<char>>&grid){
//     int n=grid.size();
//     int m=grid[0].size();

//     vis[i][j]=1;
//     queue<pair<int,int>>q;
//     q.push({i,j});
//     while(!q.empty()){
//         int r=q.front().first;
//         int c=q.front().second;
//         q.pop();
//         for(int a=-1;a<=1;a++){
//             for(int b=-1;b<=1;b++){
//                 int nr=r+a;
//                 int nc=c+b;
//                 if(abs(i-j)==1&&nr>=0&&nr<n&&nc>=0&&nc<m&&grid[nr][nc]=='1'&&vis[nr][nc]!=1){
//                     vis[nr][nc]=1;
//                     q.push({nr,nc});
//                 }

//             }
//         }
//     }

// }
//     int numIslands(vector<vector<char>>& grid) {
//         int n=grid.size();
//         int m=grid[0].size();
//         int count=0;
//         vector<vector<int>>vis(n,vector<int>(m,0));
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(!vis[i][j]&& grid[i][j]=='1'){
//                     bfs(i,j,vis,grid);
//                     count++;
//                 }
//             }
//         }
//         return count;
//     }
// };
void bfs(int row, int col, vector<vector<char>> grid, vector<vector<int>> &vis){
    queue<pair<int,int>> q;
    int n=grid.size();
    int m=grid[0].size();
    q.push({row,col});
    vis[row][col]=1;
    while(!q.empty()){
        int a=q.front().first;
        int b=q.front().second;
        q.pop();
        for(int i=-1;i<=1;i++){
            for(int j=-1;j<=1;j++){
                int nrow=a+i;
                int ncol=b+j;
                if((abs(i-j)==1) && nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && grid[nrow][ncol]=='1'){
                    vis[nrow][ncol]=1;
                    q.push({nrow,ncol});
                }
            }
        }
    }
}



int numIslands(vector<vector<char>>& grid) {
    int n=grid.size();
    int m=grid[0].size();
    int count=0;
    vector<vector<int>> vis(n,vector<int>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!vis[i][j] && grid[i][j]=='1'){
                bfs(i,j,grid,vis);
                count++;
            }
        }
    }
    return count;
}};