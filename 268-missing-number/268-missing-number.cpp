class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //Aproach_01: Maths approach:
        int n = nums.size();
        int sum = accumulate(nums.begin(),nums.end(),0);
        int ans = n*(n+1)/2;
        
        return ans - sum;
    }
};