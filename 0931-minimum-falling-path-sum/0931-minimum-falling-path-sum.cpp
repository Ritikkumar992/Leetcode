class Solution {
public:
    int solve(int i, int j, int m, vector<vector<int>>&matrix, vector<vector<int>>&dp)
    {
        // base case:
        if(j<0 || j>=m)
            return 1e9;
        if(i == 0)
            return matrix[0][j];
        
        if(dp[i][j] != -1)
            return dp[i][j];
        
        int up = matrix[i][j] + solve(i-1,j,m,matrix ,dp);
        int leftDiagonal = matrix[i][j] + solve(i-1,j-1,m,matrix,dp);
        int rightDiagonal = matrix[i][j] + solve(i-1,j+1,m,matrix,dp);
        
        return dp[i][j] =  min(up, min(leftDiagonal, rightDiagonal));
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        // Recusive Approach: time: exponential and space:O(n)
        //   row                   col
        int n = matrix.size(), m = matrix[0].size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        
        int minm = 1e9;
        for(int j = 0;j<m;j++)
        {
            int ans = solve(n-1,j,m,matrix, dp);
            minm = min(ans, minm);
        }
        return minm;
    }
};