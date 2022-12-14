class Solution {
public:
    int solve(vector<int>&nums, int n){
        //Time: O(n) and Space: O(1)
        int dp[n+1];
        dp[0] = 0;
        dp[1] = nums[0];
        
        for(int i = 2;i<n+1;i++){
            dp[i] = max(nums[i-1] + dp[i-2],dp[i-1]);
        }
        return dp[n];
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        return solve(nums,n);
    }
};