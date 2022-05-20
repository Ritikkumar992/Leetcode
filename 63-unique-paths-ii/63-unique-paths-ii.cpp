class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        //Time:O(m*n) and Space:O(1)
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        
        // if the starting cell has an obstacle then return 0;
        if(obstacleGrid[0][0] == 1)
            return 0;
        //no of ways of reaching the starting cell = 1
        obstacleGrid[0][0] = 1;
        
        //traversing through 1st row:
        for(int i = 1;i<n;i++){
            if(obstacleGrid[0][i] == 0)
                obstacleGrid[0][i] = obstacleGrid[0][i-1];
            else
                obstacleGrid[0][i] = 0;
        }
        //traversing through 1st column:
        for(int i = 1;i<m;i++){
            if(obstacleGrid[i][0] == 0)
                obstacleGrid[i][0] = obstacleGrid[i-1][0];
            else
                obstacleGrid[i][0] = 0;
        }
        //starting from cell(1,1) and traversing the whole grid:
        for(int i = 1;i<m;i++){
            for(int j = 1;j<n;j++){
                if(obstacleGrid[i][j] == 0)
                    obstacleGrid[i][j] = obstacleGrid[i-1][j] + obstacleGrid[i][j-1];
                else
                    obstacleGrid[i][j] = 0;
            }
        }
        //return the stored value at our destination cell:
        return obstacleGrid[m-1][n-1];
    }
};