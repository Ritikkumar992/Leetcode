class Solution {
public:
    void mark_current_islands(int x,int y, vector<vector<char>>&grid, int r, int c){
        if(x<0 || x>=r || y<0 || y>=c || grid[x][y] != '1')
            return;
        grid[x][y] = 2;
        mark_current_islands(x+1,y,grid,r,c);// down;
        mark_current_islands(x-1,y,grid,r,c);// up;
        mark_current_islands(x,y+1,grid,r,c);// left
        mark_current_islands(x,y-1,grid,r,c);// right
        
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        // Time:O(n) and Space:O(n*m + memory of each cell)
        int row = grid.size();
        if(row == 0)
            return 0;
        int col = grid[0].size();
        int no_of_islands = 0;
        
        for(int i = 0;i<row;i++){
            for(int j= 0;j<col;j++){
                if(grid[i][j] == '1'){
                    mark_current_islands(i,j,grid,row,col);
                    no_of_islands += 1;
                }
            }
        }
        return no_of_islands;
    }
};