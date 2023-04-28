class Solution {
    int helper(int n , vector<int>&dp){
        // base case:
        if(n<=1)
            return 1;
        if(dp[n] != -1)
            return dp[n];
        return dp[n] = helper(n-1, dp)+helper(n-2,dp);
    }
public:
    int climbStairs(int n) {
        // recursive appraoch to memoization => time: O(n) and space:e O(n) + O(n)
        vector<int> dp(n+1, -1);
        
        int ans = helper(n, dp);
        return ans;
    }
};