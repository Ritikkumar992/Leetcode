class Solution {
    int helper(int n, vector<int>&dp){
        // base case:
        if(n<=1)
            return n;
        if(dp[n] != -1)
            return dp[n];
        return dp[n] = helper(n-1, dp) + helper(n-2,dp);
    }
public:
    int fib(int n) {
        // memoization : time: O(n) and space:O(n) + O(n)
        vector<int> dp(n+1, -1);
        int ans = helper(n , dp);
        
        return ans;
    }
};