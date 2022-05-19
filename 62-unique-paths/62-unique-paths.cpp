class Solution {
    int countUniquePaths(int i , int j, int m, int n,vector<vector<int>> &dp)
    {
        if(i == (m-1) && j == (n-1))
            return 1;
        if(i>=m || j>=n)
            return 0;
        if(dp[i][j] != -1)
            return dp[i][j];
        else
            return dp[i][j] =  countUniquePaths(i+1,j,m,n,dp)+countUniquePaths(i,j+1,m,n,dp);
    }
public:
    int uniquePaths(int m, int n) {
        //Using recursion to memoization : TIme:O(n*m) and Space:O(N*M);
        vector<vector<int>> dp(m+1, vector<int>(n+1, -1));
        return countUniquePaths(0,0,m,n,dp);
    }
};