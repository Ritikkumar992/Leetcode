class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        //Using Input array as output: Time:O(n) and Space:O(1)
        int n = nums.size();
        for(int i = 1;i<n;i++){
            nums[i] += nums[i-1];
        }
        return nums;
    }
};