class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        // tabulation :  O(N*N) and space: O(N) + O(N*M)
        int n = matrix.size();
        int m = matrix[0].size();
        
        vector<vector<int>> dp(n,vector<int>(m,0));
        
        // Initializing first row - base condition
        for(int j=0; j<m; j++){
            dp[0][j] = matrix[0][j];
        }
        for(int i=1; i<n; i++){
            for(int j=0;j<m;j++){
            int up = matrix[i][j] + dp[i-1][j];
            int leftDiagonal= matrix[i][j];
            if(j-1>=0){
                leftDiagonal += dp[i-1][j-1];
            }
            else{
                leftDiagonal += 1e9;
            }
            
            int rightDiagonal = matrix[i][j];
            if(j+1<m) {
                rightDiagonal += dp[i-1][j+1];
            }
            else{
                rightDiagonal += 1e9;
            }
            dp[i][j] = min(up, min(leftDiagonal,rightDiagonal));
        }
    }
    int mn = INT_MAX;
    for(int j=0; j<m;j++){
        mn = min(mn,dp[n-1][j]);
    }
        return mn;
    }
};