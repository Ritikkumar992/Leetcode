class Solution {
public:
    bool subsetSumUtil(int index, int target, vector<int>&nums, vector<vector<int>>&dp)
    {
        if(target == 0){
            return true;
        }
        if(index == 0)
            return nums[0] == target;
        if(dp[index][target] != -1)
            return dp[index][target];
        bool notTaken = subsetSumUtil(index-1, target,nums,dp);
        bool taken = false;
        
        if(nums[index] <= target){
            taken = subsetSumUtil(index-1, target-nums[index],nums,dp);
        }
        return dp[index][target] = notTaken || taken;
    }
    bool canPartition(vector<int>& nums) {
        //memoization : time : O(n*k) and space: O(n*k) + O(n)
        int n = nums.size();
        int sum = accumulate(nums.begin(),nums.end(),0);
        if(sum % 2 != 0)
            return false;
        else
        {
            int k = sum/2;
            vector<vector<int>>dp(n,vector<int>(k+1,-1));
            return subsetSumUtil(n-1,k,nums,dp);
        }
    }
};