class Solution {
public:
    void check_islands(int x,int y, vector<vector<char>>&grid, int r, int c)
    {
        if(x<0 || x>=r || y<0 || y>=c || grid[x][y] != '1')
            return;
        grid[x][y] = 2;
        check_islands(x+1,y,grid,r,c); //down
        check_islands(x-1,y,grid,r,c);// up
        check_islands(x,y+1,grid,r,c);// right
        check_islands(x,y-1,grid,r,c);// left
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int row = grid.size();
        if(row == 0)
            return 0;
        int col = grid[0].size();
        int islands = 0;
        
        for(int i = 0;i<row;i++){
            for(int j = 0;j<col;j++){
                if(grid[i][j] == '1'){
                    check_islands(i,j,grid,row,col);
                    islands += 1;
                }
            }
        }
        return islands;
    }
};