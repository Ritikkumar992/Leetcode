class Solution {
    int dp[31];
    int helper(int n)
    {
        if(n<=1)
            return n;
        if(dp[n] != -1)
            return dp[n];
        return dp[n] = helper(n-1)+helper(n-2);
    }
public:
    int fib(int n) {
        //Recursion to Memoization : Time : O(n) and SPace: O(n)+O(n)
        memset(dp,-1,sizeof(dp));
        int ans = helper(n);
        return ans;
    }
};