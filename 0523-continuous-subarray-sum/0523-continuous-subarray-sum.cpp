class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        //Optimized Approach:
        unordered_map<int,int>mp{{0,0}};
        int sum = 0;
        
        for(int i = 0;i<nums.size();i++)
        {
            sum += nums[i];
            
            //if the remainder sum%k occurs for the first time
            if(!mp.count(sum%k))
                mp[sum%k] = i+1;
            // if the subarray size is atleast two
            else if(mp[sum%k] < i)
                return true;
        }
        return false;
    }
};