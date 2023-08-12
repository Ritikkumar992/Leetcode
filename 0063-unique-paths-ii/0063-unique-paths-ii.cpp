class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& G) {
        int n = (int)G.size();
        int m = (int)G[0].size();

        vector<vector<int>> dp(n + 4, vector<int> (m + 4, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (i == 0 and j == 0  and !G[i][j]) {
                    dp[i][j] = 1;
                }
                else if (!G[i][j]) {
                    if (i) {
                        dp[i][j] += dp[i - 1][j];
                    }
                    if (j) {
                        dp[i][j] += dp[i][j - 1];
                    }
                }
            }
        }
        return dp[n - 1][m - 1];
    }
};