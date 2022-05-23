class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<vector<int>> dp(m+1, vector<int>(n+1));
        
        for(auto it:strs)
        {
            int cnt0 = count(begin(it),end(it),'0');
            int cnt1 = size(it) - cnt0;
		for(int i = m;i>=cnt0;i--){
            for(int j = n;j>=cnt1;j--){
                dp[i][j] = max(dp[i][j],dp[i-cnt0][j-cnt1]+1);
            }
        }
        }
        return dp[m][n];
    }
};