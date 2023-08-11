class Solution {
public:
    int fun(int ind, int target, vector<int>& arr, vector<vector<int>>&dp)
    {
        if(ind == 0){
            return (target % arr[0] == 0);
        }
        if(dp[ind][target] != -1){
            return dp[ind][target];
        }
        long notTake = fun(ind-1, target, arr, dp);
        int take = 0;
        if(arr[ind] <= target)
        {
            take = fun(ind, target-arr[ind], arr,dp);
        }
        return dp[ind][target] = take + notTake;
    }
public:
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<int>> dp(n, vector<int>(amount+1, -1));
        return fun(n-1, amount, coins, dp);
    }
};