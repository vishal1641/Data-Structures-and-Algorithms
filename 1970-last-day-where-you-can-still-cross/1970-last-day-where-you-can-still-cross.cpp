class Solution {
public:

    int Row, Col;

    vector<vector<int>> directions{
        {1,0},
        {-1,0},
        {0,1},
        {0,-1}
    };

    bool dfs(vector<vector<int>>& grid, int i, int j) {

        if(i >= Row || i < 0 || j >= Col || j < 0 || grid[i][j] == 1)
            return false;

        if(i == Row - 1)
            return true;

        grid[i][j] = 1;

        for(auto it : directions) {

            int newi = i + it[0];
            int newj = j + it[1];

            if(dfs(grid, newi, newj))
                return true;
        }

        return false;
    }

    bool cancross(vector<vector<int>> &cells, int mid) {

        vector<vector<int>> grid(Row, vector<int>(Col));

        for(int i = 0; i <= mid; i++) {

            int x = cells[i][0] - 1;
            int y = cells[i][1] - 1;

            grid[x][y] = 1;
        }

        for(int j = 0; j < Col; j++) {

            if(grid[0][j] == 0 && dfs(grid, 0, j))
                return true;
        }

        return false;
    }

    int latestDayToCross(int row, int col, vector<vector<int>>& cells) {

        Row = row;
        Col = col;

        int i = 0;
        int j = cells.size() - 1;

        int lastday = 0;

        while(i <= j) {

            int mid = i + (j - i) / 2;

            if(cancross(cells, mid)) {

                i = mid + 1;
                lastday = mid + 1;

            }
            else {

                j = mid - 1;
            }
        }

        return lastday;
    }
};