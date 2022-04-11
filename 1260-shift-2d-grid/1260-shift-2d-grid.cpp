class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
    vector<vector<int>> v = grid;
     int m = grid.size( );
     int n = grid[0].size( ), i, j;
     while(k--){
        for(i=0; i < m; i++){    
            for(j=0; j < n; j++){
                if(j+1 < n){
                    v[i][j+1] = grid[i][j];
                }
                if(i+1 < m){   
                    v[i+1][0] = grid[i][n-1];
                }
            }
        }
        v[0][0] = grid[m-1][n-1];
        grid = v;
    }
    return v;
 }
};