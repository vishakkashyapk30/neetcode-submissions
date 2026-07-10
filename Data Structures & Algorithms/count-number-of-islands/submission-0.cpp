class Solution {

public:
    int numIslands(vector<vector<char>>& grid) {
        int rows=grid.size();
        int columns=grid[0].size();
        int islands=0;
        for(int i=0;i<rows; i++)
        {
            for(int j=0; j<columns; j++)
            {
                if(grid[i][j]=='1')
                {
                    dfs(grid, i, j);
                    islands++;
                }
            }
        }
        return islands;
    }

    void dfs(vector<vector<char>> &grid, int rows, int columns)
    {
        if(rows < 0 || columns <0 || rows>=grid.size() || columns>=grid[0].size() || grid[rows][columns]=='0')
            return;

        grid[rows][columns]='0';
        dfs(grid, rows, columns+1);
        dfs(grid, rows, columns-1);
        dfs(grid, rows+1, columns);
        dfs(grid, rows-1, columns);
    }
};
