class Solution {
    vector<int>dp;
    bool solve(int i , vector<int>&nums){
        if(i == nums.size()-1)
            return true;
        if(dp[i] != -1)
            return dp[i];
        for(int k = i+1;k<=i+nums[i];k++){
            if(solve(k,nums))
                return dp[i] = true;
        }
        return dp[i] = false;
    }
public:
    bool canJump(vector<int>& nums) {
        //Recursion -> Memoization:
        dp.assign(nums.size()-1, -1);
        return solve(0,nums);
    }
};