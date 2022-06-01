class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        //Using Prefix Sum method: Time:O(n) and Space:O(n)
        int n = nums.size();
        vector<int> prefix(n);
        prefix[0] = nums[0];
        
        for(int i = 1;i<n;i++){
            prefix[i] = nums[i]+prefix[i-1];
        }
        return prefix;
    }
};